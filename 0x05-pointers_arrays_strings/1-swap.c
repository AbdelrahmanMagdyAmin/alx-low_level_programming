#include "main.h"

/**
 * swap_int - it take two pointer to int and swap the two variable value
 *
 * @a: int paramter
 * @b: int paramter
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
