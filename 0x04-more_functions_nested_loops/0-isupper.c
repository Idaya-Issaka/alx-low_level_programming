#include "main.h"

/**
 * _isupper - checks if a character in uppercase or not
 * @c: character to be tested
 * Return: 1 if true, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
