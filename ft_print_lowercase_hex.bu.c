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
static void	unsigned_int_to_hex(unsigned char *num_bytes, char *num_hex);

int	ft_print_lowercase_hex(va_list args)
{
	int				bytes_printed;
	unsigned int	num;
	unsigned char	*num_bytes;
	char			*num_hex;

	bytes_printed = 0;
	num = va_arg(args, unsigned int);
	num_bytes = (unsigned char *)(&num);
	num_hex = (char *)malloc(sizeof(char) * (sizeof(int) * 2) + 1);
	if (!num_hex)
		return (0);
	unsigned_int_to_hex(num_bytes, num_hex);
	ft_print_hex_without_leading_zeros(num_hex);
	free(num_hex);
	return (bytes_printed);
}

static void	unsigned_int_to_hex(unsigned char *num_bytes, char *num_hex)
{
	int	bytes;
	int	i;

	bytes = sizeof(int);
	i = 0;
	while (bytes--)
	{
		num_hex[i] = get_most_significant_byte(num_bytes[bytes]);
		num_hex[i + 1] = get_least_significant_byte(num_bytes[bytes]);
		i += 2;
	}
	num_hex[i] = '\0';
}
