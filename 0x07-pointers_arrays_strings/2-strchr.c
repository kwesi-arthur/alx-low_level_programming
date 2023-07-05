#include "main.h"

/**
 * _strchr - a function that prints the first occuranence
 * of a character 'c' in a string 's'
 *
 * @c: the character
 * @s: the string
 *
 * Return: return the character or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
if (s[i] == c)
return (s + i);
return (0);
}
