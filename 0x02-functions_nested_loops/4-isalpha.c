#include "main.h"
/**
 * isalpha check for alphabetic charachter
 * return 1 if c is a letter, lowercase or uppercase
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
