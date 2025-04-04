#include "main.h"

int print_string(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		count++;
		i++;
	}
	return (count);
}
