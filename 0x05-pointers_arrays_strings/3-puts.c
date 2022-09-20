#include "main.h"

/**
 * _puts - this function prints the using puts method
 *
 *@str: the function parameter
 *
 *Return: 0
 */

void _puts(char *str)
{
for (; str != '\0'; str++)
{
_putchar(str);
}
_putchar('\n');
}
