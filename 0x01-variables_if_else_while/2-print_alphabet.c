#include <stdio.h>
#include <ctype.h>
/**
* Main - print alphabets in lowercase
*
*Return: return (0)
*/
int main(void)
{
for (char ch = 'A'; ch <= 'Z'; ch++)
{
char lowercaseCH = tolower(ch);
putchar(lowercaseCH);
}
putchar('\n');
return (0);
}
