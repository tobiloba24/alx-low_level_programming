#include <stdio.h>

/**
 * main- entry point
 * followed by a new line
 * Return: should always be 0 when succesful
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

