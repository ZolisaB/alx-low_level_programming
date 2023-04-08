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
	char *c = (char *)&num;

	if (*c == 1)
		return (1); /*Little-endian */
	else
		return (0); /*Big-endian */
}
