#include "main.h"

/**
 * times_table - function to print time table
 */
void times_table(void)
{
	int n, i, r;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			r = n * i;
			if (r > 9)
			{
			_putchar((r / 10) + 48);
			_putchar((r % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(r + 48);
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

