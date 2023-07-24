#include "main.h"

/**
 * rev_string - takes string and reverse the string
 *
 * @s: char paramter
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i/2)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
		j++;
	}
}
