#include "holberton.h"

/**
 * print_square - Short description, single line
 * @size: Description of parameter x
(*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */

void print_square(int size)
{
	int m;
	int j;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
