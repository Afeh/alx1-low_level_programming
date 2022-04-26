#include "main.h"

/**
 * swap_int -swaps the values of the integers
 * @a: pointer to a
 * @b: pointer to b
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
