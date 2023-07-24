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
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	while (len >= 0)
	{
		printf("%c", s[len]);
		len--;
	}
	putchar('\n');
}
