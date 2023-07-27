#include "main.h"
#include <stdio.h>

/**
 * *_strcat - that concatenates two strings.
 *
 * dest: destination parameter to func
 * src: destination parameter to func
 *
 * Return: pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;
	while(dest[c])
		c++;
	for(c1 = 0; src[c1]; c1++)
		dest[c++] = src[c1];
	return (dest);
}
