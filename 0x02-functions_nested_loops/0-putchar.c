#include "main.h"
#include <unistd.h>
/**
 * _putchar - program that prints _putchar
 * @c: print charachter
 * Return: value zero
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
