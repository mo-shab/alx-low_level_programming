#include <stdio.h>
/**
 * main - Entry point
 * This program use putchar to print the alphabet
 * without q and s
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
