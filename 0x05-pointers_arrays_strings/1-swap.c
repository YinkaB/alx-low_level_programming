#include "main.h"
/**
 * swap_int - This swaps value
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
