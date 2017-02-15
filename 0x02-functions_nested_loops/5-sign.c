#include "holberton.h"

/**
 * print_sign - prints signs and things.
(*
 * @n: an integer
 * Description: returns values for specified signs
(* section header: Section description)*
 * Return: 1 and 0 and -1 (Success)
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (-0);
	}
}
