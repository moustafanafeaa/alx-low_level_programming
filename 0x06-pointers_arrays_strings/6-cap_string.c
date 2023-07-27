#include "main.h"
#include <stdio.h>

/**
 * *cap_string -  function that capitalizes all words of a string.
 *
 * @str: destination parameter to func
 *
 * Return: return reverse of str
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDlimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isDelimiter(*S) && foundDilimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
