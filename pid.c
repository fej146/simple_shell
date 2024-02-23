#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	pid_t pid;

	pid = getpid();
	printf("The process id is: %u\n", pid);

	return (0);
}
