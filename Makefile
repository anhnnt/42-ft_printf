# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 17:18:52 by ngnguyen          #+#    #+#              #
#    Updated: 2022/11/25 18:34:49 by ngnguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ./includes/ft_printf.h

LIB_HEADER = ./libft/libft.h

LIB_NAME = ./libft/libft.a

LIBFT = libft

SRC = *.c

OFILE = *.o

CC = cc

FLAG = -Wall -Wextra -Werror

AR = ar rc

RL = ranlib

$(NAME): 
	$(CC) -c $(FLAG) $(SRC) -I $(LIB_HEADER) -I $(HEADER)
	@make -C $(LIBFT)
	cp $(LIB_NAME) $(NAME)
	$(AR) $(NAME) $(OFILE)
	$(RL) $(NAME)

all: $(NAME)

clean:
	@make clean -C $(LIBFT)
	$(RM) $(OFILE)

fclean: clean
	@make fclean -C libft/
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re