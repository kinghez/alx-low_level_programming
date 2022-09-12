#include <stdio.h>

/**
 *main - this is the main function
 *
 *Description: this programme print all lower letter axcept e, q
 *
 *Return: 0
 */
int main(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
	if ((alp != 'e') && (alp != 'q'))
	{
		putchar(alp);
	}
}
putchar('\n');
return (0);
}
