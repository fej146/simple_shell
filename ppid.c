#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("The parent process id is: %u\n", ppid);

	return (0);
}
