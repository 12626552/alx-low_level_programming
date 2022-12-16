#include "main.h"

/**
 * print_line - print straight line n times.
 *
 * @a: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}
