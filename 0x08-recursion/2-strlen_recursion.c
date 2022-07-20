#include "main.h"
/**
 * _strlen_recursion - function to the
 * number of characters in the string
 *
 * @s: parameter
 *
 * Return: end function
 */
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s != '\0')
	{
		s++;
		n = n + _strlen_recursions(s);

		return (n);
	}

	return (0);
}
