#include "main.h"

/**
 * print_last_digit - function to print last digit of number
 *
 * @n: takes input from user
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = -1 * (n % 10);
	else
		r = n % 10;

	_putchar(r + '0');
	return (r);
}
