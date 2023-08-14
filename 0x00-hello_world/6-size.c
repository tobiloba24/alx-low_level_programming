#include <stdio.h>

/**
 * main- printing various types in the computer
 *
 * Return: 0 when succesful
 */

int main(void)
{
	printf("size of char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("sizof long int: %lu byte(s)", sizeof(long int));
	printf("size  long long int: %lu byte(s)", sizeof(long long int));
	printf("size of float: %lu byte(s)", sizeof(float));
	return (0);

}
