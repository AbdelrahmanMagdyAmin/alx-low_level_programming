#include <stdio.h>



/**
 * main - Entry point
 *
 * Description: A
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		else
		{
		putchar(ch);
		ch++;
		}
	}
	putchar('\n');
	return (0);
}
