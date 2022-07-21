#include "main.h"

/**
 * clear_bit - program sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: return 1 when bit is 1 else 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int m = 0;

if (index > (sizeof(index) * 8))
return (-1);

m = (1 << index);
*n = *n & ~m;
return (1);
}
