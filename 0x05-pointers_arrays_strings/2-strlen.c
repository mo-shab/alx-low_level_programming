#include "main.h"

/**
  * _strlen - function that swap value of 2 int
  * @s: the first integer
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
