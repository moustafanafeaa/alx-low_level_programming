#include "main.h"
/**
 * _strlen_recursion - function that prints the length of a string .
 *
 * @s: input string
 *
 * Return: return len
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len += (_strlen_recursion(s + 1) + 1);
	}
return (len);
}
