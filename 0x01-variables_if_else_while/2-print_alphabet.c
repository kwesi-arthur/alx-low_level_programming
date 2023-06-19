#include <stdio.h>
#include <ctype.h>
/**
 * main - print the list of alphabets from A-Z
 *
 *Return: return 0
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
