#include <stdio.h>

/**
 * main - prints the number of argumemnts passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
