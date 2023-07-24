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
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
