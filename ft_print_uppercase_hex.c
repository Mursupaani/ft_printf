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

static void	str_to_upper(char *str);

//Print a number in hexadecimal base16 uppercase char
int	ft_print_uppercase_hex(va_list args)
{
	int		bytes_printed;
	char	*num_in_hex;

	num_in_hex = ft_number_to_hex(args, INT);
	str_to_upper(num_in_hex);
	bytes_printed = ft_print_hex_without_leading_zeros(num_in_hex);
	free(num_in_hex);
	return (bytes_printed);
}

static void	str_to_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
