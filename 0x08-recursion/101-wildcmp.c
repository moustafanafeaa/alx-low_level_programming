#include "main.h"
/**
 * wildcmp - that compares two strings and returns 1 if the 
 * strings can be considered identical, otherwise return 0
 *     a palindrome and 0 if not.
 *
 * @s1: input string
 * @s2: string 2
 *
 * Return: return 1 or 0 
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s1 && *s2 == '\0')
		{
			return (wildcmp(s1, s2++));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	return (0);
}
