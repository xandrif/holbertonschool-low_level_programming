#include <stdio.h>
#include "holberton.h"

/**
 * main - entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - check of fizz buzz
 * @void: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: void
*/

void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0 && n != 100)
		{
			printf("Buzz ");
		}
		else if (n == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", n);
		}
	putchar('\n');
}
