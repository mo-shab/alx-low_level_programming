#include "main.h"
#include <stdlib.h>

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}

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

void _puts(char *str)
{
	while(str)
	{
		_putchar(*str);
		str++;
	}
}

char *_strcat(char *dest, char *src)
{
	char *var = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (var);
}

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

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}

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
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}

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

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, b, t = 0;

for (i = 0; accept[i] != '\0'; i++)
{
b = 0;
while (s[b] != 32)
{
if (accept[i] == s[b])
{
t++;
}
b++;
}
}
return (t);
}

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

