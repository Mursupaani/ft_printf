# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 13:18:29 by anpollan          #+#    #+#              #
#    Updated: 2025/05/06 14:20:32 by anpollan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
HEADER		= ft_printf.h libftprintf.h
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
			  ft_print_num_in_hex.c

OBJS		= $(SRCS:%.c=%.o)
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

clean:
	rm -rf $(OBJS)
	$(MAKE) -C libft clean
	
fclean:	clean
	rm -rf $(NAME) compile_commands.json
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re
