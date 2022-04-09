#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints
* Return: 0
*/

int main(void)
{
	int numbrz;

	numbrz = '0';
	while (numbrz <= '9')
	{
		putchar (numbrz);
		numbrz++;
		if (numbrz != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
