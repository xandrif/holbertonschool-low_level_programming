#include "holberton.h"

/**
 * _isalpha - prints letters in ASCII
 * @c: an integer
(*
 * Description: lowercase letters
(* section header: Section description)*
 * Return: 1 or 0 depending
 */



int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
