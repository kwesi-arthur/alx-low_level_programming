#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string
 *
 *@s: the string input
 *
 * Return: the count of characters
 */

int _strlen(char *s)
{
int count = 0;

while (s[count] != ('\0'))
{
count++;
}
return (count);
}
