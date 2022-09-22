#include "main.h"
/**
 * leet - Function that encodes a string into 1337.
 * @str: String to be encoded.
 * Return: Encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char a[] = "AaEeOoTtLl";
	char b[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
