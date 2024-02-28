#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - point of entry of tokenization
 * Return: NULL
 */
int main(void)
{
	char str[] = "I love Korie";
	char *delim = " ";
	char *token;

	token = strtok(str, delim);

	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
