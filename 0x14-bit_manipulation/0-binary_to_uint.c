#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsgnd int
 * @b: char string of 0 and 1
 * Return: converted decimal number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int len = 0, base = 1
			unsigned int decimal = 0;
	int str_len = 0, base = 1;

	if (!check_string(b))
		return (0);

	while (b[str_len] != '\0')
		str_len++;

	while (str_len)
	{
		decimal += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}
	return (decimal);
}

/**
 * check_string - checks if a string has only 0's and 1's
 * @b: pointer string to be checked
 * Return: 1 if string is valid, 0 otherwise
 */

int check_string(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
		return (0);
		b++;
	}
	return (1);
}
