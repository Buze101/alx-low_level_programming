#include <stdio.h>

/**
 * main - alphabet in lowercase
 *
 * Return: value zero
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

