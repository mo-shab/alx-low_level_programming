#include "main.h"
/**
 * _isalpha check for alphabetic charachter
 * @c: is the carachter we need to check
 * return : 1 if c is a letter, lowercase or uppercase
 * return 0 if otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
