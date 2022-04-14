#include "main.h"

/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */

int print_last_digit(int n)

{
	int last_digit = ((n < 0 ? -1 : 1) * n) % 10;

	_putchar('0' + last_digit);
	return(last_digit);
}
