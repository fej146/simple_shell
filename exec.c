#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};
	char *envp[] = {"NULL"};

	printf("Before we execute");
	int list = execve(argv[0], argv, envp);/*argv[0] = pathname*/
	if (list == -1)
		perror("ERROR");
	printf("After we execute");
	return (0);
}
