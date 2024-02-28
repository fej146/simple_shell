#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the getline function
 * Return: 0
 */
int main(void)
{
	size_t n;
	char *buffer;

	n = 20;
	buffer = malloc(sizeof(char) * 10);
	printf("$ ");
	getline(&buffer, &n, stdin);
	printf("%s", buffer);
	free(buffer);
	return (0);
}
