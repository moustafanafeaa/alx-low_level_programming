#include <stdlib.h>
#include "main.h"
#include "time.h"
#include <stdio.h>

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

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
