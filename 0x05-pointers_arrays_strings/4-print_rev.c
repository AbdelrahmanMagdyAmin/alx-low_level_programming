#include "main.h"

/**
 * print_rev - takes string and print reverse of the string
 *
 * @s: char paramter
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
}
