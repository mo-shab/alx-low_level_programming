#include <stdio.h>
/**
 * main - Entry point
 * This program use putchar to print the alphabet inverse
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
