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
	int i;
	int status;
	char *args[] = {"ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		child_id = fork();
		if (child_id == -1)
		{
			perror("Error:");
			return (1);
		}

		if (child_id == 0)
		{
			execve("usr/bin/ls", args, NULL);/*argv[0] = pathname*/
			perror("ERROR");
			exit(1);
		}
		else /* this is the parent */
		{
			wait(&status);
		}
	}
	return (0);
}
