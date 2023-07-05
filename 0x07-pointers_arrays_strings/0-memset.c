#include "main.h"

/**
 * _memset - a function to fill the first 'n' bytes of the memory
 * pointer to by 's' with the constant byte 'b'
 *
 * @n: the number of bytes
 * @s: the pointer
 * @b: the constant
 *
 * Return: return the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n ; i++)
{
s[i] = b;
}
return (s);
}
