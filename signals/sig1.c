#include <stdio.h>
#include <unistd.h>
#include <signal.h>

char* lines[] = {
	"No signal found",
	"Called the signal SIGUSR1",
	"Called the signal SIGUSR2"
};

int i = 0;

void handler(int sig)
{
        switch (sig)
        {
                case SIGUSR1: i = 1; break;
		case SIGUSR2: i = 2; break;
                default: i = 0;
        }
}

int main(void)
{
	printf("PID = %d\n", getpid()); // got pid

	signal(SIGUSR1, handler); // signal processing
	signal(SIGUSR2, handler);

	while (1){ // inf cicle
		char* line = lines[i];
		printf("%s\n", line);
		sleep();
	}

	return 0;
}
