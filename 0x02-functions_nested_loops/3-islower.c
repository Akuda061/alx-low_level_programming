#include <ctype.h>

/**
 * _islower - starting point
 * @c: Description of parameter c
 * Return: value of the lower case
 */

int _islower(int c)
{
	int b = 0;

	if (islower(c))
	{	b = 1;
	}
	else
	{
		b = 0;
	}
	return (b);
}
