#include "main.h"

int _abs(int c)

/**
 * _abs - Computes the absolute value of the integer.
 * @c: The number to be computed.
 * Return: Absolute value of number or zero
 */

{ 
	if (c < 0)
	{ 
	int abs_val;

	abs_val = c * -1;
	return(abs_val);
	}
	return(c);
}
