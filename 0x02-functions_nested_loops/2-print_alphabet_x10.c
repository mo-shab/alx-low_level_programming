#include "main.h"
/*
*wirte function that print 10 times the alphabet
*return 0 if success
*/
void print_alphabet_x10(void)
{
char c;
int i = 0;
while( i<10 )
{
for ( c ='a'; c <= 'z'; c++ )
{
_putchar(c);
}
_putchar('\n');
i++;
}
}


