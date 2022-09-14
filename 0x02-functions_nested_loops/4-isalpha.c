#include "main.h"

/**
 * _isalpha - a function that checks if an input is alpha or not
 * @c: an argument us in the function
 *
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
