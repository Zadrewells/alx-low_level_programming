#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: pointer to an int
 * @b: pointer to an int
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
