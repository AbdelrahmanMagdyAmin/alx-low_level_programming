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
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
