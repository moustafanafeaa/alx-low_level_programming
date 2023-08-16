#include "function_pointers.h"

/**
 * print_name - that prints a name.
 * @name: name str
 * @f: pointer to unction
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
