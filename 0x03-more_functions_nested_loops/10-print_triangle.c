#include "holberton.h"

/**
 * print_triangle - Short description, single line
 * @size: Description of parameter x
(*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */

void print_triangle(int size)
{
	int m;
	int j;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (j = size; j >= 0; j--)
			{
				if (j >=  0 && j <= m && j < size)
				{
					_putchar(35);
				}
				else if (j < size)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
