#include <stdio.h>
/**
 * main - Entry point.
 * Description: program to print all members of base16 in lowercase.
 * Return: 0 Success.
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
