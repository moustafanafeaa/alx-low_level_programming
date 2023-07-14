#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int one;
int tow;
int thr;

for (one = 0; one <= 9; one++)
{
for (tow = 0; tow <= 9; tow++)
{
for (thr = 0; thr <= 9; thr++)
{
	if (!((tow == one) || (tow < one) || (tow > thr) || (one == tow)))
	{
		putchar(one + '0');
		putchar(tow + '0');
		putchar(thr + '0');
		if (!(tow == 8 && one == 7 && thr == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
}
}
}
putchar('\n');
return (0);
}
