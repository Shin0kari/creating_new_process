#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	printf("third program pid: %d\n",getpid());
	execvp("./programm_2", NULL);
	return 0;
}
