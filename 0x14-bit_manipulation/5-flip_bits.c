#include "main.h"

/**
 * flip_bits - Counts the number of bits to be flipped.
 *
 * @n: The first number.
 * @m: The second number to flip the bits of @n.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bits_to_flip = 0;

	while (xor_result != 0)
	{
		if (xor_result & 1)
			bits_to_flip++;

		xor_result >>= 1;
	}

	return (bits_to_flip);
}
