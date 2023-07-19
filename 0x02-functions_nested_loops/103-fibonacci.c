#include "main.h"
/**
 * main - an Entry point
 *
 * description:  prints the sum of the even-valued terms, followed by
 * a new line.
 *
 * Return: always 0 success
 *
 */
int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, sum, totsum;

	while (true)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;

		if (sum >= 4000000)
			break;
		if (sum % 2 == 0)
			totsum += sum;
	}
	printf("%lu\n", totsum);
	return (0);
}
