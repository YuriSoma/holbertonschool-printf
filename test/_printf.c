#include "main.h"

int _printf(const char *format, ...)
{
     int i = 0, count = 0;
     char ch;
     char *str;
     va_list ap;

     va_start(ap, format);
     while (format[i] != '\0')
     {
	     if (format[i] == '%')
	     {
		     switch (format[i + 1])
		     {
			     case 'c':
				     ch = va_arg(ap, int);
				     _putchar(ch);
				     count++;
				     break;
			     case 's':
				     str = va_arg(ap, char *);
				     count += print_string(str);
				     break;
			     case '%':
				     _putchar('%');
				     count++;
				     break;
			     default:
				     print_string("Error, unexpected specifier!!");
		     }
		     i += 2;
		     continue;
	     }
	     else if (format[i] == '\\')
	     {
		     if (format[i + 1] == 'n')
		     {
			     _putchar('\n');
			     i += 2;
			     continue;
		     }
	     }
	     _putchar(format[i]);
	     count++;
	     i++;
     }
     va_end(ap);
     return(count);
}
