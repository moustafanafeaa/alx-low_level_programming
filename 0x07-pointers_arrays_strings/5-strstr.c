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
	int j;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (haystack[i] >= '\0')
	{
		j = 0;

		if (haystack[j] == needle[j])
		{
			do {
				if (needle[j + 1] == '\0')
					return (haystack);
				j++;

			} while (haystack[j] == needle[j]);
		}
		haystack++;
	}
return (0);
}
