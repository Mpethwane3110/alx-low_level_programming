#include "main.h"

/**
 *set_bit - function that sets the value of a bit to 1 at an index
 *@n: value
 *@index: index of the bit you nwant to set
 *Return: 1 if successful and -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
