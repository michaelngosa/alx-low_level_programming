#include <stdio.h>
/*
 * main - prints the alphabet in lowercase
 * Description: using the main function
 * this program prints the alphabet in lowercase
 * Return: alway returns 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
