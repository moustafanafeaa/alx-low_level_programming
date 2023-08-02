#include "main.h"
/**
 * is_palindrome -   function that returns 1 if a string is
 *     a palindrome and 0 if not.
 *
 * @s: input string
 *
 * Return: return 1 if s is palindrome or 0 is not
 */
int pali(char *s, int p);
int len(char *c);
int is_palindrome(char *s)
{
	int length = len(s);

	return (pali(s, length - 1));
}

/**
 * len - return length
 *
 * @c: string
 *
 * Return: return len
 */
int len(char *c)
{
	if (*c != '\0')
	{
		return (1 + len(++c));
	}
	return (0);
}
/**
 * pali - palindrome str
 *
 * @s: str pointer
 * @p: the position
 * Return: 0 or 1
 */
int pali(char *s, int p)
{
	if (p < 1)
		return (1);

	if (*s == (*s + 1))
		return (pali(s + 1, p - 2));
	return (0);
}
