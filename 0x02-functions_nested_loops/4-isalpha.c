#include "main.h"

/**
 *  _isalpha - Checks if a character is alphabetic.
 *
 *   * @c: character to be checked.
 *
 *   return: 1, else 0
 */

nt _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
