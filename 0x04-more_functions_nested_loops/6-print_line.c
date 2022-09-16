#include <stdio.h>
#include "main.h"

/**
 * print_line  - print a straight line
 * @n: number of _ printed
 * Return: nothing
 */
void print_line(int n)
{
while (n-- > 0)
{
putchar('_');
}
return ('\n');
}
