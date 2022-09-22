#include "main.h"
/**
 * _strcat - Program function that concatenates two strings.
 * @dest: First string serving as destination string.
 * @src: Second string to concatenate
 *
 * Return: Concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
