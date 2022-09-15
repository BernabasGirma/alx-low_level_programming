#include"main.h"

/**
 * print_most_numbers - print 0 - 9 except 2 an d
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9 && num != 2 && 4);
	_putchar('\n');
}
