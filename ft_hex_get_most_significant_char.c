/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_get_most_significant_char.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:13:18 by anpollan          #+#    #+#             */
/*   Updated: 2025/05/05 19:07:37 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	get_most_significant_byte(unsigned char byte)
{
	unsigned char	c;

	c = byte / 16 + 48;
	if (ft_isdigit(c))
		return (c);
	else
		c += 39;
	return (c);
}
