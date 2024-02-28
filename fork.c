#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point of the fxn fork
 * Return: 0
 */
int main(void)
{
	pid_t process_id;
	pid_t child;

	printf("Before fork\n");

	child = fork();
	if (child == -1)
	{
		printf("forking went wrong\n");
		return (1);
	}

	printf("After forking\n");
	process_id = getpid();
	printf("My process id is %u\n", process_id);

	/**
	 * fork returns 0 to child and pid of child to father
	 * to test that, the ff helps
	 */
	/*if (child == 0)
	{
		printf("I am the child and my PID is %u\n", process_id);
	}
	else
	{
		printf("I (with pid %u) receive my child's pid - %u", process_id, child);
	}*/
	return (0);
}
