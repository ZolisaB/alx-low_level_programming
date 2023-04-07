#include "main.h"

/**
 * binary_to_uint - takes a binary number and converts it to an unsigned int.
 * @b: binary number as string.
 *
 * Return: decimal equivalent of the binary number as an unsinged int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int power = 1;
	const char *p = b;

	if (b == NULL)
		return (0);

	while (*P != '\0')
	{
		if (*p != '0' && *p != '1')
			return (0);
		p++;

	}

	p--;

	while (p >= 0)
	{
		if (*p == '1')
			result += power;
		power *= 2;
		p--;
	}

	return (result);
