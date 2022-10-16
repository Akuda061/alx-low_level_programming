#include <stdio.h>
/**
 * main - start point
 *
 * Return: bring back 0
 */
int main(void)
{
	char c;
	int b;

	for (b = '0'; b <= '9'; ++b)
	{
		putchar (b);
	}
	for (c = 'a'; c <= 'f'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
