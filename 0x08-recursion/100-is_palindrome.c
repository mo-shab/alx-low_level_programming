#include "main.h"

int is_palindrome_checker(char *s, int i, int j);
int _strlen_recursion(char *s);
/**
* is_palindrome - the main function to check if it's palindrome
* @s: the string to see if it's panlidrome
*
* Return: 1 if yes, 0 if not
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
if (len == 0)
return (1);
return (is_palindrome_checker(s, 0, len - 1));
}

/**
* _strlen_recursion - function to return length of a string
* @s: the string
* Return: the lenght of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (_strlen_recursion(s) + 1);
}

/**
* is_palindrome_checker - this function help to check if s is palindrome
* @s: is the string to be tested
* @i: the start of the sting
* @j: the end of the string
*
* Return: 1 if yes, 0 ifnot
*/

int is_palindrome_checker(char *s, int i, int j)
{
if (i >= j)
return (1);
if (s[i] != s[j])
return (0);
return (is_palindrome_checker(s, i + 1, j - 1));
}
