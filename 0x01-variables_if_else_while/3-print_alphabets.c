#include <stdio.h>
/**
 * main - Entry point
 * This program use putchar to print the alphabet 
 * first in lowercase, then in upper case.
 * we are allowed to use only putchar 3 times.
 * no printf or get allowed
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        putchar(ch);
    }
	putchar('\n');
	return (0);
}
