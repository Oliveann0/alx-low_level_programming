#include "main.h"
/**
 * string_toupper - Function that changes all lowercase of
 * a string to uppercase.
 * @str: String to change to uppercase.
 * Return: Uppercase string.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
