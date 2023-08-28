#include "main.h"

/**
 *_memcpy - the function that copies memory area
 *@dest: memory where it's stored
 *@src: memory where it's copied
 *@n: number of byte(s)
 *
 *Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
