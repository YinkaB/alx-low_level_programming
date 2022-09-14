#include "main.h"

/**
 * print_sign - prints a numbers sign
 *
 * @n: the number at which the sign will be printed
 *
 * Return: 1 else 0
 */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		_putchar('+');
		test = 1;
	}
	else if (n == 0)
	{
		_putchar(0);
		test = 0;
	}
	else
	{
	_putchar('-');
	test = -1;
	}
	return (test);
}
