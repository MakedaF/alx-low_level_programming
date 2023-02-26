#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints digit numbers
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
