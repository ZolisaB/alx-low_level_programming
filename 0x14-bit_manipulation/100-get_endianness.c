#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: If bit-endin - 0.
 * If little-endin - 1.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
		return (1);
	else
		return (0);
}
