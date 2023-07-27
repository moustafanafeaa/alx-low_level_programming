#include "main.h"
#include <stdio.h>

/**
 * isLower -  function that check if the c is lower case
 *
 * @c: parameter to func
 *
 * Return: return 1 or 0
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter -  function that capitalizes all words of a string.
 *
 * @c: parameter to func
 *
 * Return: return 
 *
 */
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n, .!?\"{}{}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}








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
