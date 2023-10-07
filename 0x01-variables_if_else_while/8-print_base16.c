#include <stdio.h>
/**
 * main - Entry point
 * This program use putchar to print the base 16
 * using the code ASCII, we give it to putchar
 * we are not allowed to use printf or put...
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char ch;
for (i = 48; i <= 58; i++)
{
putchar(i);
}
for (ch = 'a'; i <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
