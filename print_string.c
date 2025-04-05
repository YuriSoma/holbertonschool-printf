#include "main.h"

/**
 * print_string - prints the passed string by using _putchar function
 * @s: the passed string.
 *
 * Return: the count of all printed characters
 * except the string terminator (\0).
 */
int print_string(char *s)
{
	int i = 0, count = 0;

	if (!s)
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		count++;
		i++;
	}
	return (count);
}
