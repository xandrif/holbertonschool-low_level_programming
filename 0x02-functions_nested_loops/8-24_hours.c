#include "holberton.h"

/**
 * jack_bauer - prints the last digit.
(*
 * @void: no there are none
 * Description: returns absolute values for specified signs
(* section header: Section description)*
 * Return: 0 (Success)
 */

void jack_bauer(void)
{
	unsigned char hours;
	unsigned char minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{

			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
