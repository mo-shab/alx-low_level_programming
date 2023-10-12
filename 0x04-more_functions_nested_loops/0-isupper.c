#include "main.h"

/**
 * _isupper(int c) : test if c is an upper
 * @C: us the variable we gonna test
 * return: 1 if C is upper
 * 0 if C is otherwise
*/

int _isupper(int c)
{
    if (c >= 'A' || c <= 'Z')
    {
        return (1);
    }
    else
        return (0);
}