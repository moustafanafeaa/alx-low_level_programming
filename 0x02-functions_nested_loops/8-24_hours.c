#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * return: 0 success
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 23; j++)
			for (k = 0; k <= 5; k++)
				for (m = 0; m <= 9; m++)
				{
					_putchar(i + '0');
					if (j >= 10)
					{
						int res;

						res = j % 10;
						_putchar(res + '0');
					}
					else
					{
						_putchar(j + '0');
					}
					_putchar(':');
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
}
