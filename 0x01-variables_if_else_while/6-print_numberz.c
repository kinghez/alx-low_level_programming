#include <stdio.h>

/**
 *main - print all numbers of base ten
 *Description: using the main function
 *this programme print all numbers of base ten
 *Return: 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
