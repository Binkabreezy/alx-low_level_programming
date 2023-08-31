#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if it is big endian, or 1 if it is small endian
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
