#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_printf(const char *restrict format, ...);

int	main(void)
{
	printf("Test %2$d, %1$d", 2, 1);
	ft_printf("%%", 12, 16);
}

int	ft_printf(const char *restrict format, ...)
{
	va_list	args;
	int		arg_count;
	int		test;

	/*
	arg_count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			if (*format + 1 == '%')
				write(1, "%", 1);
			else if(*format + 1 == 'c')
					break ;
		}
		format++;
	}
	*/
	va_start(args, format);
	/*
	while (arg_count > 0)
	{
		test = va_arg(args, int);
		arg_count--;
		printf("%d\n", test);
	}
	*/
	printf("", (int)args.);
	va_end(args);
	// Change the return value
	return (0);
}
