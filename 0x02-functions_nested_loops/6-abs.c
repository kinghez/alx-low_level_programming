#include "main.h"

/**
 *_abs - this functin find the absolute value of a number
 *@c: this is an argument for the functioon
 *Return: 0
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
{
return (c * -1);
}
}
