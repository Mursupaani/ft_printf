/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_to_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:04:53 by anpollan          #+#    #+#             */
/*   Updated: 2025/05/06 15:54:57 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

void	ft_print_num_in_hex(unsigned int num, int *bytes_printed, int conversion)
{
	char	*base = "0123456789abcdef";
	char	hex;

	if (num >= 16)
		ft_print_num_in_hex(num / 16, bytes_printed, conversion);
	hex = base[num % 16];
	if (conversion == U_HEX)
		hex = ft_toupper(hex);
	write(1, &hex, 1);
	*bytes_printed = *bytes_printed + 1;
}
