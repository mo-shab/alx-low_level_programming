#include "main.h"
/**
 * _isalpha - check for alphabetic charachter
 * @c: is the carachter we need to check
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
