#include <stdio.h>
/**
 * main - Entry point.
 * Description: Program to reverse the alphabets in lowercase.
 * Return: 0 Success.
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
