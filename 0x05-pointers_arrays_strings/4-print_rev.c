#include "main.h"

/**
 * print_rev - prints a string in reverse follwed by a new line
 *
 * @s: the string to print
 *
 * Return: the string
 */

void print_rev(char *s)
{
int fcounter = 0;
int i, n;

for (i = 0; s[i] != '\0'; i++)
{
fcounter++;
}

for (n = (fcounter - 1); n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
