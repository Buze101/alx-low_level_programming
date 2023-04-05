#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
