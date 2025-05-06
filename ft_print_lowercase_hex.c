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
	char			*num_in_hex;

	num_in_hex = ft_number_to_hex(args, INT);
	bytes_printed = ft_print_hex_without_leading_zeros(num_in_hex);
	free(num_in_hex);
	return (bytes_printed);
}
