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
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar(0);
	return (0);
}
