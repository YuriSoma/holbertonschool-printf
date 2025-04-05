#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	int count = 0;

	if (n == -2147483648)
	{
		count += _putchar('-');
		count += _putchar('2');
		count += print_number(147483648);
		return (count);
	}

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n / 10)
		count += print_number(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}
