#include "main.h"
/**
* leet - Function that encode a string into 1337
* @str: the string to be encoded
* Return: string encoded
*/
char *leet(char *str)
{
int i, j;
char *leet_chars = "4433007711";
char *letters = "aAeEoOtTlL";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = leet_chars[j];
break;
}
}
}
return (str);
}
