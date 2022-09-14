#include "main.h"

/**
*main - the main function call the print alpha function
*Description: this programme uses the main function
*to print all alphabet using the alpha fuct
*Return: 0
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
