#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: the 1st integer
 *
 * @b: the 2nd integer
 *
 * return: the integers
 */

void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
 
}
