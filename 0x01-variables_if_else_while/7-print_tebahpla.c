#include <stdio.h>

/**
 *main - print alphabet in reverse
 *Description: using the main function
 *this programme print alphabet in reverse
 *Return: 0
 */
int main(void)
{
char alp;
for (alp = 'z'; alp >= 'a'; alp--)
{
	putchar(alp);
}
putchar('\n');
return (0);
}
