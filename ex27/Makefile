# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slatchma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/18 20:03:20 by slatchma          #+#    #+#              #
#    Updated: 2017/10/19 18:43:47 by slatchma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOR = -Wall -Wextra -Werror
PRO = sources/ft_putchar.c sources/ft_putstr.c
OBJ = ft_putchar.o ft_putstr.o
HHH = sources/fichier.h

all :
	gcc -c $(NOR) $(PRO) -I ./includes
	ar rc libft.a $(OBJ)
	ranlib libft.a
	gcc $(NOR) main.c $(HHH) -L. libft.a
	mv a.out ft_display_file


clean : 
	rm -rf $(OBJ) libft.a sources/fichier.h.gch

fclean : clean
	rm -rf ft_display_file

re :fclean all

