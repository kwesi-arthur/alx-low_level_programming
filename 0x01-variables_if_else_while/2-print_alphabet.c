#include <stdio.h>
#include <ctype.h>
/**
* Main - print alphabets in lowercase
*
*Return: return (0)
*/
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i <= 25; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
