#include "main.h"
/**
 * _memset - fills memory with a constnt byte
 *
 * @n: buffer size
 * @s: bytes of the memory area pointed
 * @b: the constant byte
 *
 * Return: a pointer to the memory area s.
 */
char *_memet(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
