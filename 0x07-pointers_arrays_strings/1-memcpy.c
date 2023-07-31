#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 *
 * @dest: destination of array
 * @src: source of array that will copied
 * @n: number of byte
 *
 * Return: return char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		dest[i] = src[0];
		i++;
		n--;
	}
	return (dest);
}
