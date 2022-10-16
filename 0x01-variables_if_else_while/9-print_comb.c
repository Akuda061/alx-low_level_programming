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
		if (c != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
