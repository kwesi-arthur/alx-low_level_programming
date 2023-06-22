#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: the number whose last digit will be printed
 *
 * Return: always 0 (success)
 */

int print_last_digit(int i)
{

int ld = i % 10;
if (ld < 0)
ld *= -1;

_putchar(ld);

return (ld);
}
