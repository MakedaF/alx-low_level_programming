#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: ALways 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
