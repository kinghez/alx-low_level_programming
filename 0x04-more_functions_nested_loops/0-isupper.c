#include "main.h"

/**
 * _isupper - checks if a number is uppercase
 * @c: character to be tested
 *Return: 1 whether is true or 0 if false
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
