#include "main.h"
/**
 * main - prints the alphabet 
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
