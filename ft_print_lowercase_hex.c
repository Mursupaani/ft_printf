/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowercase_hex.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:55:00 by anpollan          #+#    #+#             */
/*   Updated: 2025/05/05 14:56:41 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//Print a number in hexadecimal base16 lowercase char
int	ft_print_lowercase_hex(va_list args)
{
	int				bytes_printed;
	unsigned int	num;

	num = va_arg(args, unsigned int);
	bytes_printed = 0;
	ft_print_num_in_hex(num, &bytes_printed, L_HEX);
	return (bytes_printed);
}
