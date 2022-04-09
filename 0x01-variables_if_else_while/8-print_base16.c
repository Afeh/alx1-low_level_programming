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
	int b_16;
	char c_;

	b_16 = '0';
	while (b_16 <= '9')
	{
		putchar(b_16);
		b_16++;
	}
	c_ = 'a';
	while (c_ <= 'f')
	{
		putchar(c_);
		c_++;
	}
	putchar('\n');
	return (0);
}
