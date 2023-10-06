#include <stdio.h>
/**
 * main - Entry point
 * This program use putchar to print the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch;

    for (ch='a'; ch<= 'z'; ch++)
    {
        putchar(ch);
    }
    return (0);
}
