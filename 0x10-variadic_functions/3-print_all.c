/**
 * print_all - Print a list of different types of arguments.
 * @format: A format string containing format specifiers for the arguments.
 * @...: The variable number of arguments.
 */

void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char c;

va_start(args, format);

while (format[i] != '\0')
{
c = format[i];
if (c == '%')
{
switch (format[i + 1])
{
case 'c':
printf("%c", va_arg(args, char));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
if (va_arg(args, char *) == NULL)
{
printf("(nil)");
}
else
{
printf("%s", va_arg(args, char *));
}
break;
default:
break;
}
i += 2;
}
else
{
printf("%c", c);
i++;
}
}
va_end(args);
printf("\n");
}
