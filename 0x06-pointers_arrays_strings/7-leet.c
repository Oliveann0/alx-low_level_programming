#include "main.h"
/**
<<<<<<< HEAD
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
=======
 * leet - FUnction that encodes a string into 1337.
 * @s: String to encode
 * Return: Encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);
>>>>>>> 5d209f84b422c0c218564892821d98269c1d11af
}
