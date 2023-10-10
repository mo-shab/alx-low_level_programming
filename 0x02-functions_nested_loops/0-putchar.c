#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
char ch[] = "_putchar";
int i=0;
for( i =0; i<9;i++)
{
_putchar(ch[i]);
}
_putchar('\n');
return 0;
}
