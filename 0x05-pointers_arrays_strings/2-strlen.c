#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: the string
 *
 * Return - the number of char os string
 */

int _strlen(char *s)
{
int count;
int len;

for (count = 0; s[count] != '\0'; count++)
{
len++;
}
return (len);
}
