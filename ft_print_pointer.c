/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:28:52 by anpollan          #+#    #+#             */
/*   Updated: 2025/05/05 14:30:58 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//Print the void * pointer in hexadecimal char
int	ft_print_pointer(va_list args)
{
	int		bytes_printed;
	char	*ptr_in_hex;
	void	*ptr;

	ptr = va_arg(args, void *);
	if (!ptr)
		return (write(1, "(nil)", 5));
	bytes_printed = write(1, "0x", 2);
	ptr_in_hex = ft_number_to_hex(args, PTR);
	bytes_printed += ft_print_hex_without_leading_zeros(ptr_in_hex);
	free(ptr_in_hex);
	return (bytes_printed);
}
