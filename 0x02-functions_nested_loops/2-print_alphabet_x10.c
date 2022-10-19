
#include "main.h"

/**
 * print_alphabet_x10 - the starting point
 *
 * Return: after program is done it return
 */

void print_alphabet_x10(void)
{
	char i;
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	}
}
