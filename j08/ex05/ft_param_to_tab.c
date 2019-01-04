/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 19:07:14 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/16 11:07:55 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char					*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char					*ft_strdup(char *src)
{
	char *dest;

	if (!(dest = malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (0);
	dest = ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	int			i;

	if (!(tab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
