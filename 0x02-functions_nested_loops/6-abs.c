#include "holberton.h"

/**
 * _abs - prints signs and things.
(* @n: an integer
 *
 * Description: returns absolute values for specified signs
(* section header: Section description)*
 * Return: 0 (Success)
 */


int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));

	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n);
	}
	return (0);
}
