# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 13:18:29 by anpollan          #+#    #+#              #
#    Updated: 2025/04/30 15:08:22 by anpollan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
HEADER		= libftprintf.h
LIBFT		= libft/libft.a
LIBFT_H		= libft/libft.h

SRCS		= ft_printf.c \
			  ft_print_char.c \
			  ft_print_percentage.c \
			  ft_print_string.c \
			  ft_print_pointer.c \
			  ft_print_decimal.c \
			  ft_print_integer.c \
			  ft_print_unsigned_decimal.c \
			  ft_print_lowercase_hex.c \
			  ft_print_uppercase_hex.c \
			  ft_hex_get_most_significant_char.c \
			  ft_hex_get_least_significant_char.c \
			  ft_print_hex_without_leading_zeros.c \
			  ft_number_to_hex.c

OBJS		= $(SRCS:%.c=%.o)
BONUS		= 
BONUS_OBJS	= $(BONUS:%.c=%.o)
CC			= cc
C_FLAGS		= -Wall -Wextra -Werror -c -g
AR			= ar
AR_FLAGS	= -rcs

# CFLAGeihin lisää -Llibft -llibft.a
all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJS) $(LIBFT)

%.o: %.c $(HEADER) $(LIBFT_H)
	$(CC) $(C_FLAGS) $< -o $@

$(LIBFT): 
	$(MAKE) -C libft

bonus: .bonus

.bonus: $(NAME) $(BONUS_OBJS)
	$(AR) $(AR_FLAGS) $(NAME) $(BONUS_OBJS)
	touch .bonus

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)
	$(MAKE) -C libft clean
	
fclean:	clean
	rm -rf $(NAME) .bonus compile_commands.json
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all bonus clean fclean re
