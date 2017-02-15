#include "holberton.h"

/**
 * print_last_digit - prints the last digit.
(*
 * @n: an integer
 * Description: returns absolute values for specified signs
(* section header: Section description)*
 * Return: the last digit (Success)
 */


int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (m < 0)
	{
		m = m * (-1);
		_putchar(m + '0');
		return (m);
	}
	else
	{
		_putchar(m + '0');
		return (m);
	}
	return (0);
}
