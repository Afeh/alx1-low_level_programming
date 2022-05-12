#include "main.h"
/**
 * _isdigit - checks if is within 0 and 9
 *
 * @c: the parameter in the function
 *
 * Return: 1 or 0
 */
int _isdigit(int c)

{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
