#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 * @n: value to be inputed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 1; j++)
			_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
