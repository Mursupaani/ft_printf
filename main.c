#include "libftprintf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int				s_int_min = INT_MIN;
	int				s_int_max = INT_MAX;
	unsigned int	u_int_min = 0;
	unsigned int	u_int_max = UINT_MAX;
	int				s_int_10547210 = 10547210;
	unsigned int	u_int_255 = 255;
	char			*str = "This is a test!";
	char			*null = NULL;
	int				bytes_printed;

	ft_printf("MY FUNCTION:\n");
	bytes_printed = ft_printf("%i\n", s_int_min);
	ft_printf("%d\n", bytes_printed);
	bytes_printed = ft_printf("%i\n", s_int_min);
	ft_printf("%i\n", bytes_printed);
	bytes_printed = ft_printf("%d\n", s_int_max);
	ft_printf("%d\n", bytes_printed);
	bytes_printed = ft_printf("%d\n", s_int_max);
	ft_printf("%i\n", bytes_printed);
	bytes_printed = ft_printf("%u\n", u_int_min);
	ft_printf("%d\n", bytes_printed);
	bytes_printed = ft_printf("%u\n", u_int_max);
	ft_printf("%i\n", bytes_printed);
	bytes_printed = ft_printf("UINT 255 %x\n", s_int_10547210);
	ft_printf("%d\n", bytes_printed);
	bytes_printed = ft_printf("SINT 255 %x\n", u_int_255);
	ft_printf("%d\n", bytes_printed);
	bytes_printed = ft_printf("UINT 255 %X\n", s_int_10547210);
	ft_printf("%d\n", bytes_printed);
	bytes_printed = ft_printf("SINT 255 %X\n", u_int_255);
	ft_printf("%d\n", bytes_printed);
	bytes_printed = ft_printf("%p\n", str);
	ft_printf("%d\n", bytes_printed);
	bytes_printed = ft_printf("%p\n", null);
	ft_printf("%d\n", bytes_printed);
	bytes_printed = ft_printf("%s\n", str);
	ft_printf("%d\n", bytes_printed);
	bytes_printed = ft_printf("%c\n", *str);
	ft_printf("%d\n", bytes_printed);

	ft_printf("\n");
	ft_printf("ORIGINAL FUNCTION:\n");

	bytes_printed = printf("%i\n", s_int_min);
	printf("%d\n", bytes_printed);
	bytes_printed = printf("%i\n", s_int_min);
	printf("%i\n", bytes_printed);
	bytes_printed = printf("%d\n", s_int_max);
	printf("%d\n", bytes_printed);
	bytes_printed = printf("%d\n", s_int_max);
	printf("%i\n", bytes_printed);
	bytes_printed = printf("%u\n", u_int_min);
	printf("%d\n", bytes_printed);
	bytes_printed = printf("%u\n", u_int_max);
	printf("%i\n", bytes_printed);
	bytes_printed = printf("UINT 255 %x\n", s_int_10547210);
	printf("%d\n", bytes_printed);
	bytes_printed = printf("SINT 255 %x\n", u_int_255);
	printf("%d\n", bytes_printed);
	bytes_printed = printf("UINT 255 %X\n", s_int_10547210);
	printf("%d\n", bytes_printed);
	bytes_printed = printf("SINT 255 %X\n", u_int_255);
	printf("%d\n", bytes_printed);
	bytes_printed = printf("%p\n", str);
	printf("%d\n", bytes_printed);
	bytes_printed = printf("%p\n", null);
	printf("%d\n", bytes_printed);
	bytes_printed = printf("%s\n", str);
	printf("%d\n", bytes_printed);
	bytes_printed = printf("%c\n", *str);
	printf("%d\n", bytes_printed);

	return (0);
}
