#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsgnd int
 * @b: char string of 0 and 1
 * Return: converted decimal number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
	{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
	}
