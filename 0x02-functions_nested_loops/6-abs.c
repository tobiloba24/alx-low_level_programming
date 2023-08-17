#include "main.h"

/**
 * _abs - find absolute value of int
 * @a: function parameter
 * Return: -a or a;
 */


int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);

}
