#include "holberton.h"

/**
 * abs - prints signs and things.
(*
 * @int: an integer
 * Description: returns absolute values for specified signs
(* section header: Section description)*
 * Return: 0 (Success)
 */


int _abs(int);
{
	int x;
	unsigned y;
	y = (x >= 0 ? x:-x);
	putchar("%i", y);
	return (0);
}
