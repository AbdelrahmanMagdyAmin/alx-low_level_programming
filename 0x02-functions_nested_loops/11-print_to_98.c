#include "main.h"

/**
 * print_to_98 - function to print from n to 98
 *
 * @n: takes input from user
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d", 98);
}


