# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slatchma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 13:25:07 by slatchma          #+#    #+#              #
#    Updated: 2017/11/07 15:42:29 by slatchma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OOO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : 
	gcc -c -Wall -Wextra -Werror $(CCC) -I ./includes
	ar rc libft.a $(OOO)
	ranlib libft.a

clean :
	rm -rf $(OOO)

fclean : clean
	rm -rf libft.a

re : fclean all

