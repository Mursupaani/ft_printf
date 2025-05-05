/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:22:19 by anpollan          #+#    #+#             */
/*   Updated: 2025/04/30 18:03:13 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stddef.h>
#include <stdio.h>

static int	check_flag(int c);
static int	choose_conversion(int conversion, va_list args);

// static int	count_arguments(const char *format); //DONT NEED THIS?

// Upon successful return, these functions return the number of bytes
// printed (excluding the null byte used to end output to strings).
int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		bytes_printed;
	int		conversion_type;

	va_start(args, format);
	bytes_printed = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			conversion_type = check_flag(format[i + 1]);
			if (conversion_type != ERR)
				bytes_printed += choose_conversion(conversion_type, args);
			i++;
		}
		else
			bytes_printed += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	bytes_printed += i;
	return (bytes_printed);
}

static int	check_flag(int c)
{
	if (c == 'c')
		return (CHAR);
	else if (c == 's')
		return (STR);
	else if (c == 'p')
		return (PTR);
	else if (c == 'd')
		return (DEC);
	else if (c == 'i')
		return (INT);
	else if (c == 'u')
		return (UINT);
	else if (c == 'x')
		return (L_HEX);
	else if (c == 'X')
		return (U_HEX);
	else if (c == '%')
		return (PERC);
	// Else throw an error?
	return (ERR);
}

static int	choose_conversion(int conversion, va_list args)
{
	size_t	bytes_printed;

	bytes_printed = 0;
	if (conversion == CHAR)
		bytes_printed = ft_print_char(args);
	else if (conversion == STR)
			bytes_printed = ft_print_string(args);
	else if (conversion == PTR)
		return (2);
		//Print the void * pointer in hexadecimal char
	else if (conversion == DEC)
		return (3);
		//Print a decmal number in base 10
	else if (conversion == INT)
		return (4);
		//Print an integer in base 10
	else if (conversion == UINT)
		return (5);
		//Print an unsigned decimal base 10 number
	else if (conversion == L_HEX)
		return (6);
		//Print a number in hexadecimal base16 lowercase char
	else if (conversion == U_HEX)
		return (7);
		//Print a number in hexadecimal base16 uppercase char
	else if (conversion == PERC)
		bytes_printed = ft_print_percentage();
	// Else throw an error?
	return (bytes_printed);
}

/*
static int	count_arguments(const char *format)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			if (*format + 1 == 'c' || *format + 1 == 's'
				|| *format + 1 == 'p' || *format + 1 == 'd'
				|| *format + 1 == 'i' || *format + 1 == 'u'
				|| *format + 1 == 'x' || *format + 1 == 'X')
			count++;
			// ELSE THROW AN ERROR?
		}
		format++;
	}
	return (count);
}
*/
