#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int one;
	int teen;

for (one = 0; one <= 9; one++)
{
	for (teen = 0; teen <= 9; teen++)
	{
		if (!((teen == one) || (teen < one)))
		{
			putchar(one + '0');
			putchar(teen + '0');
			if (!((teen == 8) && (one == 9)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
