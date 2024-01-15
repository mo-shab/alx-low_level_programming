#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - tests whether a character is a
 * lowercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	return (0);
}

/**
 * _isalpha - check for alphabetic charachter
 * @c: is the carachter we need to check
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}

/**
 * _abs - calculate the absolute value of the number from zero.
 * @i: the integer to be converted.
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}

/**
 * _isupper - test if c is an upper
 * @c: us the variable we gonna test
 * return: 1 if C is upper
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}

/**
  * _isdigit - Check if a character is a digit
  * @c: The number to be checked
  *
  * Return: 1 for a character that will be a digit or 0 for any else
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}

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

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;

	return (ni);
}

/**
* _strcat - function appends the src to dest with \0 at the end
* @src: The char source
* @dest: the destination of the appends
*
* Return: a pointer to the result dest
*/

char *_strcat(char *dest, char *src)
{
	char *var = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (var);
}

/**
* _strncat - function appends the src to dest with max n from src
* @src: The char source
* @dest: the destination of the appends
* @n: how many bytes used from the sources
* Return: a pointer to the result dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *var = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (var);
}

/**
* _strncpy - function that copy a string
* @dest: char destination
* @src: char source
* @n: number of character we need to copy
* Return: a pointer to char destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

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
		if (dif != 0)
			return (dif);
	}

	return (dif);
}

/**
* _memset- function to fills memory with a constant byte.
* @s: the string to be filled
* @b: the data to fill the s
* @n: number of files
* Return: mempry for the final s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
* _memcpy - function that copies memory area.
* @dest: string to copy from src
* @src: the source where copy from
* @n: number of copy
* Return: char with the data copied
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */

char *_strchr(char *s, char c)
{
	int i = 0, b;

	while (s[i])
	{
		i++;
	}
	for (b = 0; b <= i; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, b, t = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[i] == s[b])
				t++;
			b++;
		}
	}

	return (t);
}

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
		}
	}

	return ('\0');
}

/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for ( ; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return ('\0');
}
