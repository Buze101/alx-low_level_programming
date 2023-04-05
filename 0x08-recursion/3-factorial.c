#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int result = 1;

	if (n < 0)
		return (-1);

	while (n > 0)
	{
		result *= n--;
	}

	return (result);
}
