/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_to_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:04:53 by anpollan          #+#    #+#             */
/*   Updated: 2025/05/05 19:08:00 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//Print a number in hexadecimal base16 lowercase char
static void	unsigned_int_to_hex(unsigned char *num_bytes, int bytes, char *num_in_hex);

char	*ft_number_to_hex(va_list args, int num_type)
{
	int				bytes_in_num;
	unsigned int	num;
	unsigned char	*num_byte_str;
	char			*num_in_hex;
	unsigned char	*arg_ptr;

	if (num_type == PTR)
	{
		arg_ptr = va_arg(args, unsigned char *);
		num_byte_str = (unsigned char *)(&arg_ptr);
		bytes_in_num = sizeof(unsigned char *);
	}
	else
	{
		num = va_arg(args, unsigned int);
		num_byte_str = (unsigned char *)(&num);
		bytes_in_num = sizeof(int);
	}
	num_in_hex = (char *)malloc(sizeof(char) * (bytes_in_num * 2 + 1));
	if (!num_in_hex)
		return (NULL);
	unsigned_int_to_hex(num_byte_str, bytes_in_num, num_in_hex);
	return (num_in_hex);
}

static void	unsigned_int_to_hex(unsigned char *num_bytes, int bytes, char *num_in_hex)
{
	int	i;

	i = 0;
	while (bytes--)
	{
		num_in_hex[i] = get_most_significant_byte(num_bytes[bytes]);
		num_in_hex[i + 1] = get_least_significant_byte(num_bytes[bytes]);
		i += 2;
	}
	num_in_hex[i] = '\0';
}
