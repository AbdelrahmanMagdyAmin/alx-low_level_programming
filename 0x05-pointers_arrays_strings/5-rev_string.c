#include "main.h"

/**
 * print_rev - takes string and reverse the string
 *
 * @s: char paramter
 *
 * Return: Nothing
*/
void rev_string(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j != i)
	{
		int temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	putchar ('\n');
}
