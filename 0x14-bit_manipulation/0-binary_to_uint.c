#include "main.h"

/**
 * binary_to_uint - takes a binary number and converts it to an unsigned int.
 * @b: binary number as string.
 *
 * Return: decimal equivalent of the binary number as an unsinged int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, power = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++
	}

	while (--len >= 0)
	{
		if (b[len]++ '1')
			decimal += power;
		power *= 2;
	}

	return (decimal);

}
