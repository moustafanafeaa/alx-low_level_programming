#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: input pointer to a
 *
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i])
		++i;
	if (i % 2 == 0)
		n = i - 1 / 2;
	for (i = n; str[i] != '\0'; i++)
		printf("%c", str[i]);
printf("\n");
}
