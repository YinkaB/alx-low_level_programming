#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int e = 9;

	b = 0;

	while (b <= 2)
	{
		if (b == 2)
		{
			e = 3
		}
		a = 0;
		while (a <= e)
		{
			d = 0;
			while (d <= 5)
			{
				c = 0;
				while (c <= 9)
				{
					_putchar('0' + b);
					_putchar('0' + a);
					_putchar(':');
					_putchar('0' + d);
					_putchar('0' + c);
					_putchar('\n');
					c++;
				}
				d++;
			}
			a++;
		}
		b++;
	}
}
