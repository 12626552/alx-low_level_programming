#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch != 2 && ch != 4)
	{
	_putchar(ch);
	}
	{
	_putchar('\n');
	}
	}
}
