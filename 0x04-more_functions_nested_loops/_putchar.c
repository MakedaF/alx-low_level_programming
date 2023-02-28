#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - prints putchar
 *
 * Return:On success 1
 * On error, -1 
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
