/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatchma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 21:03:27 by slatchma          #+#    #+#             */
/*   Updated: 2017/11/07 17:29:18 by slatchma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap_str(char **s1, char **s2)
{
	char *c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_tri(char **str, int size)
{
	int i;

	i = 0;
	while (++i < size)
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			ft_swap_str(&str[i], &str[i + 1]);
			i = 0;
		}
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac > 1)
	{
		ft_tri(av, ac - 1);
		while (i++ < ac - 1)
			ft_putstr(av[i]);
	}
	return (0);
}
