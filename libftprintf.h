/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:45:08 by anpollan          #+#    #+#             */
/*   Updated: 2025/05/05 19:07:42 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef enum format_conversion
{
	ERR,
	CHAR,
	STR,
	PTR,
	DEC,
	INT,
	UINT,
	L_HEX,
	U_HEX,
	PERC
} form_conv;

int		ft_printf(const char *, ...);
int		ft_print_char(va_list args);
int		ft_print_string(va_list args);
int		ft_print_percentage();
int		ft_print_pointer(va_list args);
int		ft_print_decimal(va_list args);
int		ft_print_integer(va_list args);
int		ft_print_unsigned_decimal(va_list args);
int		ft_print_lowercase_hex(va_list args);
int		ft_print_uppercase_hex(va_list args);
void	ft_print_num_in_hex(unsigned int num, int *bytes_printed, int conversion);

#endif
