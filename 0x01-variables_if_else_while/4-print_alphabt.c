#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the alphabet except q and e
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
