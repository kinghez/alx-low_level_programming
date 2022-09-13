#include <stdio.h>

/**
 *main - print letters of the alphabet from a to z
 *
 *Description: this programme help the main function
 *this programmes run the letter of the alphabet
 *
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
