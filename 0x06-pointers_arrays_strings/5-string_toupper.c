#include "main.h"
/**
* string_toupper - change all lowercase to upper case.
* @str: the char to be upper
* Return: char changed to upper
*/
char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - ('a' - 'A');
}
return (str);
}

