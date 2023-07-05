#include "main.h"

/**
 * _memcpy - function that copies 'n' bytes from memory area
 * 'src' to memory area 'dest'
 *
 * @n: the number of bytes to copy
 * @src: the pointer to copy from
 * @dest: the pointer to copy to
 *
 * Return: return the value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;

while (i < n)
{
src[i] = dest[i];
i++;
}
return (dest);
}
