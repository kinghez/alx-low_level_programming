#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/** betty style doc for function main goes there
*main - this will check if the number is negative or positive
*
*Description: write a main function that checks if a number n is -ve, +ve or neutral
*please is part of the description
*
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is Negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is Positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
