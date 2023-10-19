#include "main.h"
/**
* _strcmp - function that compare two strings
* @s1: first string
* @s2: second string
* Return: 0 if s1 and s2 are equal
* negative value is s1 is less than s2
* positive value if s1 greater than s2
*/
int _strcmp(char *s1, char *s2)
{
int dif = 0;
int i;

for (i = 0;  s1[i] != '\0' || s2[i] != '\0'; i++)
{
dif = s1[i] - s2[i];
if( dif != 0)
return (dif);
}
return (dif);
}

