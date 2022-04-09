#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints
* Return: 0
*/

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}
