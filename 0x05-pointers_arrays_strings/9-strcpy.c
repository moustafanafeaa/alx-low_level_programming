#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src, including the 
 * terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: input pointer to a
 * @src: input int
 *
 * Return: return dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	*dest = *src;
	/*int i = 0;
	*
	*while (dest[i])
	*{
	*	printf("%c", dest[i]);
	*	++i;
	*}
	*printf("\n");
	*
	*/
	return (dest);
}
