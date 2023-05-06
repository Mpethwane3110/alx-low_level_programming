#include "main.h"

/**
 *clear_bit - function that sets value of a bit to 0 at an index
 *@n: value chamge
 *@index: of the bit you want to set
 *Return: 1 if successful or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
