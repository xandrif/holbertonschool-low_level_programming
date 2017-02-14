#include "holberton.h"

/**
 * _islower - Short description, single line
 * @c: an integer
(*
* Description: lowercase letters
(* section header: Section description)*
* Return: 1 or 0 depending
*/



int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
