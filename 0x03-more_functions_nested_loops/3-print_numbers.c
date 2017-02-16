#include "holberton.h"

/**
 * print_numbers - prints 0-9 followed by a new line
 * @void: no params
(*
 * Description: Longer description of the function)?
(* section header: Section description)*
* Return: 0 success
*/

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
