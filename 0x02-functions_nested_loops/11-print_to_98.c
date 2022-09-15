#include "main.h"

/**
 * print_to_98 - this funtion print from one to ninety eight
 *
 * @n: the only argument in the function
 *
 * return: 0
 */
int print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
{
printf("%d,", n--);
}
printf("%d\n", n);
}
else
{
while (n < 98)
{
printf("%d, ", n++);
}
printf("%d\n", n);
}
}
