#include <stdio.h>
#include "holberton.h"

/**
 * fizz_buzz - Short description, single line
 * @n: Description of parameter x
(*
 * Description: Longer description of the function)?
(* section header: Section description)*
* Return: 0 - success
*/
int fizz_buzz(int n)
{
	for (n = 1; n <= 100; n++)
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	putchar('\n');
	return (0);
}

int main(void)
{
	fizz_buzz(100);
	return(0);
}
