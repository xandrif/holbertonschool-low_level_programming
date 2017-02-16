#include "holberton.h"

/**
 * print_line - Short description, single line
 * @n: Description of parameter x
(*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */

void print_line(int n)
{
	int j;

	if (n >= 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
