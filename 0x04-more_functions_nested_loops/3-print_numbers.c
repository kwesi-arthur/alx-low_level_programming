#include "main.h"
#include <unistd.h>

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
_putchar(n + '0');
_putchar('\n');
}
}
