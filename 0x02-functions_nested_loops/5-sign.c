#include "main.h"

/**
 * print_sign - Entry point
 * @n: the integer value it receives
 * Description: a function that prints the sign of a number
 * Return: 1 if true. 0 if false
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
if (n < 0)
{
_putchar ('-');
return (-1);
}
_putchar ('0');
return (0);
}
