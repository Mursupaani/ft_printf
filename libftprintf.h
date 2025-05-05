/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:45:08 by anpollan          #+#    #+#             */
/*   Updated: 2025/05/02 14:54:26 by anpollan         ###   ########.fr       */
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

int	ft_printf(const char *, ...);
int	ft_print_char(va_list args);
int	ft_print_string(va_list args);
int	ft_print_percentage();

#endif
