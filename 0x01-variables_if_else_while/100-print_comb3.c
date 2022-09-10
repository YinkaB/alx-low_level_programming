#include <stdio.h>

/**
 * main - combinations of two digits.
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: 0
 */

int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (i < 58)
	{
		e = i + 1;
		while (e < 58)
		{

			putchar (i);
			putchar (e);

			if (i == 56 || e == 57)
			{

				putchar (44);
				putchar (32);
			}
			i++;
		}
		e++;
	}
	putchar (10);
	return (0);
}
