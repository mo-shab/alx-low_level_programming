#include "main.h"

/**
  * _strlen - function that return lenght of the string
  * @s: the string
  *
  * Return: len of a string
  */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
