#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encodes a string using rot13.
 *
 * @c: destination parameter to func
 *
 * Return: return (reverse of str
 */
char *rot13(char *c)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = c;

	while (*c)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*c == rot13[i])
			{
				*c = ROT13[i];
				break;
			}
		}
		c++;
	}
	return (ptr);
}
