#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
(*
 * Description: prints the alphabet
(* section header: Section description)*
 * Return: Always 0 (Success)
 */


void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
}
