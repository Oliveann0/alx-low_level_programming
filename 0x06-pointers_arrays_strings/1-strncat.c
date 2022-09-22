#include "main.h"
/**
 * _strncat - Function that concatenates two strings.
 * @dest: First string.
 * @src: Second string.
 * @n: Number of bytes.
 * Return: Concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
