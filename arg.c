#include <stdio.h>
/**
 * main - point of entry
 * function prints out all the arguments, without using ac
 * @ac: arg count
 * @av: arg vector
 * Return: an int
 */
int main(int ac, char **av)
{
	while (*av != NULL)
	{
		printf("av = %s\n", *av);
		av++;
	}
	return (0);
}
