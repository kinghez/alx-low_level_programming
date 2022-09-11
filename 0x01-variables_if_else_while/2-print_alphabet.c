
#include <stdio.h>

/**
 *main - this function print all alphabet
 *
 *Description: this uses the main function to print all alphabet from a to z
 *
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
