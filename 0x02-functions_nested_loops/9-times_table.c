#include "holberton.h"

/**
 * times_table - prints the last digit.
(*
 * @void:d
 * Description: ok
(* section header: Section)*
 * Return: 0 (Success)
 */


void times_table(void)
{
	int m;
	int i;
	int n;

	for (m = 0; m <= 9; m++)
	{
		for (i = 0; i <= 9; i++)
		{
			n = m * i;
			if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n < 10 && i > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((n % 10) + '0');

			}
			else if (i == 0)
			{
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
