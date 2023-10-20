#include "main.h"
/**
* cap_string - function to capitalise all words
* @s: the caracter to capitalise
* Return: char value
*/
char *cap_string(char *src)
{
int j = 0, i;
int cspc = 13;
char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
while (src[j])
{
i = 0;
while (i < cspc)
{
if ((j == 0 || src[j - 1] == spc[i]) && (src[j] >= 97 && src[j] <= 122))
src[j] -= 32;
i++;
}
j++;
}
return (src);
}


