#include <stdio.h>

/**
 * main - main funaction
 *
 * Return: always 0 (Succes)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
