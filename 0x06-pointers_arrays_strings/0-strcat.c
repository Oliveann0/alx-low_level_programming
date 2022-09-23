#include "main.h"
/**
<<<<<<< HEAD
 * _strcat - Program function that concatenates two strings.
 * @dest: First string serving as destination string.
 * @src: Second string to concatenate
 *
=======
 * _strcat - Function that concatenates two strings.
 * @dest: First string.
 * @src: Second string.
<<<<<<< HEAD
>>>>>>> 6f0854f4da92e4153f2f7d48a2954bbe6ff90db0
 * Return: Concatenated string.
=======
 * Return: Concatenated string
>>>>>>> 5d209f84b422c0c218564892821d98269c1d11af
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

<<<<<<< HEAD
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
=======
	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
>>>>>>> 6f0854f4da92e4153f2f7d48a2954bbe6ff90db0
	return (dest);
}
