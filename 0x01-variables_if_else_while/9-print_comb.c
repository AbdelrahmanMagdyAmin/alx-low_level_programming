#include <stdio.h>



/**
 * main - Entry point
 *
 * Description: A
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		putchar(", ");
		digit++;
	}
	putchar('\n');
	return (0);
}
