#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints the numbers of base 10 from 0-9
* Return: 0
*/

int main(void)
{
	int numbrs;

	for (numbrs =0; numbrs < 10; numbrs++)
	{
		putchar(numbrs);
	}
	putchar('\n');
	return (0);
}
