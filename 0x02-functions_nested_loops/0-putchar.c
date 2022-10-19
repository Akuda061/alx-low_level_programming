#include "main.h"

/**
 * main - the starting point
 *
 * Return: after program is done it return
 */

int main(void)

{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	_putchar(word[i]);
	_putchar('\n');
	return (0);
}
