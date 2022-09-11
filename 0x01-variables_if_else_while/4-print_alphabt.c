#include <stdio.h>
/**
 * main - Entry point.
 * Description: Program to print alphabets in lowercase except e and q.
 * Return: 0 Success.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c++;
		}
	}
		putchar('\n');
		return (0);
}
