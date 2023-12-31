#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _len(char *str);
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac:int
 * @av: array of char
 * Return: return pointer
 */

char *argstostr(int ac, char **av)
{
	int i, size = 0, j, x = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++, size++)
	{
		size += _len(av[i]);
	}

	str = malloc(size * sizeof(char) + 1);
	if (str == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[x] = av[i][j];
			x++;
		}

		if (str[x] == '\0')
			str[x++] = '\n';
	}
	str[x] = '\0';
	return (str);
}

/**
 * _len - return length of str
 * @str: string
 * Return: return number of length
 */
int _len(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	;
	return (len);
}
