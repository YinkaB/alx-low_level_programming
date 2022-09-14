#include "main.h"

/**
 * main - checks lower case
 *
 * Description: function that checks for lower case
 *
 * Return: 1 else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
