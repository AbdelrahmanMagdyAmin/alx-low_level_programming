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

	while (digit <= 102)
	{
		putchar(digit + '0');
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
