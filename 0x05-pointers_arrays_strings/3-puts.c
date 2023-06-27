#include "main.h"
#include "stdio.h"

/**
 * _puts - prints a string followed by a newline
 *
 * @str: the string input
 *
 * Return:the string
 */

void _puts(char *str)
{

int n = 0;

while (str[n] != ('\0'))
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
