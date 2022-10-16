#include <stdio.h>

/**
 * main - main funaction
 *
 * Return: always 0 (Succes)
 */

int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
