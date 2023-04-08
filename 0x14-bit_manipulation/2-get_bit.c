#include "main.h"

/**
 * get_bit - Returns the values of a bit at a given index.
 *
 * @n: The unsigned long integer containing the bit.
 * @index: The index of the bit to retrieve.
 *
 * Return: Value of bit at the specified index or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	return (1);

}
