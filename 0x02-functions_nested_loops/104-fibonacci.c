#include "main.h"
/**
 * numLength - return length of the number
 *
 * @n: check input
 *
 * Return: return 1 if number = 0
 * return length of number
 *
 */
int numLength(int n)
{
	int length = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		length += 1;
	}
	return (length);
}
/**
 * main - an Entry point
 *
 * description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 * , followed by a new line.
 *
 * Return: always 0 success
 *
 */
int main(void)
{
	int count, init0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f10 = 0, f20 = 0, sumo = 0;

for (count = 1; count <= 98; count++)
{
	if (f10 > 0)
	{
		printf("%lu", f10);
	}
	init0s = numLength(mx) - 1 - numLength(f1);

	while (f10 > 0 && init0s > 0)
	{
		printf("%d", 0);
		init0s--;
	}

	printf("%lu", f1);

	sum = (f1 + f2) % mx;
	sumo = f10 + f20 + (f1 + f2) /  mx;
	f1 = f2;
	f10 = f20;
	f2 = sum;
	f20 = sumo;

	if (count != 98)
	{
		printf(", ");
	}
	else
	{
		printf("\n");
	}
}
return (0);
}






