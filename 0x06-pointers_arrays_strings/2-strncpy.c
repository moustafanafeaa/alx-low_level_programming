#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - that copies a string.
 *
 * @dest: destination parameter to func
 * @src: destination parameter to func
 * @n: input at most n
 *
 * Return: pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
return (dest);
}
