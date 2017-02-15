#include "holberton.h"

/**
 * times_table - prints the last digit.
(*
 * @void
 * Description: returns absolute values for specified signs
(* section header: Section description)*
 * Return: 0 (Success)
 */


void times_table(void)
{
	int m;
	int i;
	int n;

	for (m = 0; m <= 9; m++)
	{
		for (i=0; i <=9; i++)
		{
			if (m >= 10)
			{
				_putchar((m % 10) + '0');
				_putchar((m / 10) + '0');
			}
			else
			{
				n = m * i;
				_putchar(',');
				_putchar('_');
				_putchar('n');
			}
		}
		(if (m = 0))
		{
			_putchar(n);
			_putchar(',');
		}
		(if (m = 9))
		{
			_putchar('_');
			_putchar('n');
		}
	       	_putchar('\n');
	}
}
