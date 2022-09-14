#include "main.h"

/**
 * print_sign - this function print the sign of a number
 * @c: this is an argument in the function
 * Return: 0
 */

int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
