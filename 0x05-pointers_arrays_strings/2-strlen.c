#include "main.h"
/**
 * _strlen - Length of a string.
 * @s: String to count.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
