#include "main.h"

/**
 * largest_number - this function print the  largest number
 * @a: first arguement
 * @b: second argument
 * @c: third argument
 * Return: 0
 */
int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
