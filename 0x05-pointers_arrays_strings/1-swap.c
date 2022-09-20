#include "main.h"
/**
 * swap_int - Swapping integers.
 * @a: Integer 1.
 * @b: Integer 2.
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
