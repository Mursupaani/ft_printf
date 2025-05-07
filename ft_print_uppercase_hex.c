/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uppercase_hex.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:58:40 by anpollan          #+#    #+#             */
/*   Updated: 2025/05/05 15:00:54 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//Print a number in hexadecimal base16 uppercase char
int	ft_print_uppercase_hex(va_list args)
{
	int				bytes_printed;
	unsigned int	num;

	num = va_arg(args, unsigned int);
	bytes_printed = 0;
	ft_print_num_in_hex(num, &bytes_printed, U_HEX);
	return (bytes_printed);
}
