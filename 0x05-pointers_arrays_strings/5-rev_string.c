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
	while (j != i)
	{
		if (s[i] != '\0')
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			j++;
		}	
		i--;
	}
	s[j] = '\0';
}
