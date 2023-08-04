#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 *
 * @s: memory area starting address
 * @b: value we will filled
 * @n: number of byte
 *
 * Return: return char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
