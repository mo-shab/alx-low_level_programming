#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - adds two integers stored as strings
 *
 * @n1: first integer string to add
 * @n2: second integer string to add
 * @r: array to store resulting string in
 * @size_r: size of array r
 *
 * Return: the summed string in r. If r is too small for the result,
 * return 0;
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry;
int index_r;
int digit1, digit2, sum;
if (len1 + len2 >= size_r)
{
return 0;
}
carry = 0;
index_r = 0;
while (len1 > 0 || len2 > 0 || carry > 0) {
digit1 = (len1 > 0) ? n1[--len1] - '0' : 0;
digit2 = (len2 > 0) ? n2[--len2] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[index_r++] = (sum % 10) + '0';
}
r[index_r] = '\0';
for (int i = 0, j = index_r - 1; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}
return r;
}

