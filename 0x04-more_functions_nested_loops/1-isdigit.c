#include "main.h"

/**
 * _isdigit - check whether a character is digit or not
 * @c: tested character
 * Return: i if true or 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
