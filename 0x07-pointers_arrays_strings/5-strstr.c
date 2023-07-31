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

	if (*needle == 0)
	{
		return (haystack);
	}

	for (i = 0; haystack[i] >= '\0'; i++)
	{
		int j = 0;

		if (haystack[j] == needle[j])
		{
			do {
				if (needle[j + 1] == '\0')
					return (haystack);
				j++;

			} while (haytext[j] == needle[j]);
		}
	}
return (0);
}
