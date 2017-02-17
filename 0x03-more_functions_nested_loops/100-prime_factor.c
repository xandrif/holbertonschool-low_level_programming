#include <stdio.h>
#include "holberton.h"

/**
 * prime_factor - Short description, single line
 * @n: Description of parameter x
(*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */

int prime_factor(int n)
{
	int j = 0;
	int l;
	int k;

	while (j < n)
		if ((n % j) == 0)
		{
			k = 0;
			l = (n / j);
			while (k < l )
			{
				l = (l * k);
				if ((n % l) == 0)
				{
					k = (k * 2);
				}
				else
				{
					printf("%d", l);
				}
			}
		}
		else if ((n % j) == 0)
		{
			j++;
		}
	return (0);
}

/**
 * main - entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	prime_factor(35000);
	return (0);
}
