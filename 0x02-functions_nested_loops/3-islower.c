#include "main.h"
/**
 * _islower - tests whether a character is a
 * lowercase.
 * The function will take a paramete @c
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
