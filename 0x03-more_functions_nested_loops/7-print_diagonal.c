#include "holberton.h"

/**
 * print_diagonal - Short description, single line
 * @n: Description of parameter x
(*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */

void print_diagonal(int n)
{
	int m;
	int j;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			for (j = 0; j <= m; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
