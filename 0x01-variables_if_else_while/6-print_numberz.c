#include <stdio.h>
/**
 * main - Entry point
 * This program print all single digit from 0 to 10
 * we only can use putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
