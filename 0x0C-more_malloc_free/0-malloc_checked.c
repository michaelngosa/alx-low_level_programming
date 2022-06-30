#include "main.h"
#include <stdiolib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * if malloc fails, status value is equal to 98.
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
