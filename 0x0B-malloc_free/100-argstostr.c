#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac:int
 * @av: array of char
 * Return: return pointer
 */
char *argstostr(int ac, char **av)
{
	int i, size = 0,j, x = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	size += ac;

	str = malloc(1 * sizeof(char) + 1);
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
	return (str);
}
