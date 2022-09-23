#include "main.h"
/**
 * _strncpy - Function that copies a string.
 * @dest: Destination string.
 * @src: String to copy.
 * @n: Number of bytes.
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
