#include "main.h"
/**
 * lindex - return last index
 * @s: string
 * Return: count 
 */
int is_palindrome(char *s);
int checking(char *s, int st, int end, int mod);
int lindex(char *s)
{
	int c = 0;

	if (*s)
	{
		c += lindex(s + 1) + 1;
	}
	return (c);
}
/**
 * is_palindrome - return 1 if str is palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int l = lindex(s);

	return (cheching(s, 0, l - 1, l % 2);
}

/**
 * checking - check the string
 * @s: string
 * @st: start of str
 * @end: end of str
 * @mod: model string
 * Return: bool
 */
int checking(char *s, int st, int end, int mod)
{
	if ((st == end && mod != 0) || (st == end + 1 && mod == 0)
		return (1);
	else if (s[st] != s[end])
		return (0);
	else
		return (checking(s, st + 1, end - 1, mod));
}
