#include "main.h"

/**
 *int _isalpha(int c) - checks for alphabetic character
 *
 *@c: the character to be checked
 *
 *Return: return 1 if c is a letter, lower case or uppercase otherwise return 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
return (1);
else
return (0);
}

