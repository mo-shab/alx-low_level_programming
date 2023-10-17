#include "main.h"

/**
  * print_rev - function that print a string in reverse
  * @s: the stiring to be printed
  *
  * Return: nothing
  */
void print_rev(char *s)
{
int len = 0;
int i;
while (s[len] != '\0')
{
len++;
}
for (i = len; i >= 0; i++)
{
printf("%c", s[len]);
}
printf("\n");
}
