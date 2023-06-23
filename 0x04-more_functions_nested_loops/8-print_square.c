#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: size of both width and length
 *
 * Return: a square made of '#
 */

void print_square(int size)
{
int b, a;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (b = 1; b <= size; b++)
{
_putchar('#');
for (a = 2; a <= size; a++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
