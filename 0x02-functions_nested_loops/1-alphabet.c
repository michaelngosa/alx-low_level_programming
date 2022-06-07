#include "main.h"

/**
 * main - entry point
 *
 * Description: function print_alphabet, in lowercase
 * This program prints the alphabet, in lowercase, followed by a new line
 * Return: always 0
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');

}
