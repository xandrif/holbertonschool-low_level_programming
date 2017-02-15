#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints the last digit.
(*
 * @n: it's an int
 * Description: returns absolute values for specified signs
(* section header: Section description)*
 * Return: 0 (Success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}

	}
	printf("98\n");
}
