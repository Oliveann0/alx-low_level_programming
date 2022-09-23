#include "main.h"
/**
 * _puts - Prints a string with new line
 * @str: String to print.
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
