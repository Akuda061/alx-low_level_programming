#include <ctype.h>

/**
 * _isalpha - starting point
 * @c: Description of parameter c
 * Return: value of the lower case
 */

int _isalpha(int c)
{
	int b = 0;

	if (isalpha(c))
	{	b = 1;
	}
	else
	{
		b = 0;
	}
	return (b);
}
