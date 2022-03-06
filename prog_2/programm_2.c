#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main (void)
{
	pid_t p_pid=getppid();
	pid_t c_pid=getpid();
	if (fork() == 0) {
	        printf ("parent(ex-child) pid=%d, child's pid=%d\n", c_pid, getpid());
        } else {
                printf ("parent pid=%d, child's pid=%d\n", p_pid, c_pid);
        }
}
