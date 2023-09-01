#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argumentnt count
 * @argv: argument vector
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
