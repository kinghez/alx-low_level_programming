#include "main.h"

/**
 * swap_int - this function takes two int and swap them
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;

}
