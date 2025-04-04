#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints to std the passed character.
 * @c: passed character when it called.
 *
 * description: works similer to putchar funtion in std library.
 * Return: printing to the console.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
