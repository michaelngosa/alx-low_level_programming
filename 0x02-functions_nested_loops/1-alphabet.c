#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * This program prints the alphabet, in lowercase, followed by a new line
 * Return: always 0
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
return (0);
}
