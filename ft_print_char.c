/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:10:08 by anpollan          #+#    #+#             */
/*   Updated: 2025/05/02 14:15:06 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Print a single character.
int	ft_print_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return(write(1, &c, 1));
}
