#include "main.h"
/**
* rot13 - function that rotate by 13
* @str: string to be rotated
* Return: stirn rotated
*/
char *rot13(char *str)
{
int i;
char c, base;
for (i = 0; str[i] != '\0'; i++)
{
c = str[i];
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
str[i] = (c - base + 13) % 26 + base;
}
}
return (str);
}
