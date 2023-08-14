#include <stdio.h>

/**
 * main- entry main point
 *
 * Return: 0 when succesful
 */

int main(void)
{
	printf("size of char: %lu byte(s\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("sizof long int: %lu byte(s)\n", sizeof(long int));
	printf("size  long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of float: %lu byte(s)", sizeof(float));
	return (0);
}
