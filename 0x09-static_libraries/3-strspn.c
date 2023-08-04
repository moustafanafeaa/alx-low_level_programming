#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string that will be scanned
 * @accept: string containing the list of characters to match
 *
 * Return: return len
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				num++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (num);
		}
		s++;
	}
	return (num);
}
