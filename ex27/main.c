/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatchma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:53:25 by slatchma          #+#    #+#             */
/*   Updated: 2017/11/07 15:03:18 by slatchma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "sources/fichier.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int argc, char *argv[])
{
	int		fich;
	int		nbreo;
	char	c[10001];

	nbreo = -1;
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	fich = open(argv[1], O_RDONLY, S_IRUSR);
	while (nbreo != 0)
	{
		nbreo = read(fich, c, 10000);
		c[nbreo] = '\0';
		ft_putstr(c);
	}
	close(fich);
	return (0);
}
