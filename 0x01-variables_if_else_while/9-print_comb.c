#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= 9)
	{
		putchar(i);
		putchar(',');
		i++;
	}
	putchar('\n');
	return (0);
}
