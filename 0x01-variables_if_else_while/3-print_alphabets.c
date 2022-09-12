#include <stdio.h>

/**
 *main - this function print capital and lower case
 *
 *Description: this uses the main function to output letter
 *the programme print both capital and lower letters
 *
 * Return: 0
 */
int main(void)
{
char ch;
char cap;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (cap = 'A'; cap <= 'Z'; cap++)
{
	putchar(cap);
}
putchar('\n');
return (0);
}
