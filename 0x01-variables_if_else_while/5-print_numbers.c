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

	numbrs = 0;
	while(numbrs <= 9)
	{
		putchar(numbrs);
		numbrs++;
	}
	putchar('\n');
	return (0);
}
