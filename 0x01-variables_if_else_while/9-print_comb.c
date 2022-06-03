#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using the main function
 * this program prints "all possible combinations of single-digit numbers
 * Return: alway returns 0
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i)
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
