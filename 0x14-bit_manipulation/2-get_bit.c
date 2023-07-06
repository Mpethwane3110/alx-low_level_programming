#include "main.h"

/**
 *get_bit - function that returns the value at an index
 *@n: number returned
 *@index: starting from zero the bit you want to get
 * Return: value of the bit or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
