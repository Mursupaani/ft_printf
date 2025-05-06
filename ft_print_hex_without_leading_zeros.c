/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_without_leading_zeros.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:40:05 by anpollan          #+#    #+#             */
/*   Updated: 2025/05/05 18:44:08 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hex_without_leading_zeros(char *num_in_hex)
{
	if (!num_in_hex)
		return (0);
	while (*num_in_hex && *num_in_hex == '0')
		num_in_hex++;
	if (*num_in_hex == '\0')
		return (write(1, "0", 1));
	ft_putstr_fd(num_in_hex, 1);
	return (ft_strlen(num_in_hex));
}
