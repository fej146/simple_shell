#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - entry point for fork and wait
 *
 * Return: 0
 */
int main(void)
{
	pid_t child_id;

	child_id = fork();

	if (child_id == -1)
	{
		perror("Error");
		return (1);
	}
	if (child_id == 0)
	{
		printf("I am the child\n");
	}
	else
	{
		wait(NULL);
		printf("I am the parent\n");
	}
	return (0);
}
