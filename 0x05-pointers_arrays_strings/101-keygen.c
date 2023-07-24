#include <stdio.h>
#include "main.h"
#include "time.h"

/**
 * main - entry point
 *
 * Return: return (0)
 *
 */
int main(void)
{
	int sum;
	char c;

	srand(timr(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
