#include "main.h"

/**
 * main - check the code
 *
 * Description: prints 10 times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	int num = 0;

	while (num < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		num++;
	}
}
