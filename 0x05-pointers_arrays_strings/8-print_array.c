#include "main.h"
/**
 * print_array - Print elements of an array.
 * @a: Array.
 * @n: Number of elements in array.
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
