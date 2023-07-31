#include "main.h"
/**
 * *_strstr - function that locates a substring.
 *
 * @haystack: string thst scanned
 * @needle: char that search from
 *
 * Return: return string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p;

	for (i = 0; haystack[i] >= '\0'; i++)
	{
		int j = 0;
		for (;needle[j] != '\0'; j++)
		{	
			if (needle[j] == haystack[i])
			{
				p = haystack[i];
				return (p);
			}
		}
	}
	return (0);
}				
