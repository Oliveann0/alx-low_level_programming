#include "main.h"
/**
 * reverse_array - Function that reverses the content
 * of an array of integers
 * @a: Array of integers.
 * @n: Number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
