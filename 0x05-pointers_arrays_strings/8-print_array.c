#include "main.h"

/**
 * print_array  - takes array and number of elements and print elemnts
 *
 * @a: int paramter
 * @n: int paramter
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
	}
}
