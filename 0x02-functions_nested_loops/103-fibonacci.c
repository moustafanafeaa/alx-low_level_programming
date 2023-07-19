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
	unsigned long f1 = 0, f2 = 1, sum;
	float totsum;

	while (1)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;

		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			totsum += sum;
	}
	printf("%.0f\n", totsum);
	return (0);
}
