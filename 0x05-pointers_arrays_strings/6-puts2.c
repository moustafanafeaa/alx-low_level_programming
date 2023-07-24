#include "main.h"

/**
 * puts - prints every other character of a string, starting 
 *   with the first character,.
 *
 * @str: input pointer to a
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str != '\0'; i += 2)
		printf("%c", str[i]);
}
