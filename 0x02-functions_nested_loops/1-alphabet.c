#include "main.h"

/**
 * main - prints alphabet
 *
 * Description:  prints the alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
