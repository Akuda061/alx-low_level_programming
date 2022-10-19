#include "main.h"

/**
 * print_sign - starting point
 * @n: Description of parameter n
 * Return: value of the lower case
 */

int print_sign(int n)
{
	int b;

	if (n > 0)
	{	
		b = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		b = 0;
		_putchar('0');
	}
	else
	{
		b = -1;
		_putchar('-');
	}
	return (b);
}
