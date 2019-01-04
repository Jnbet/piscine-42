/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 11:47:03 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/13 16:34:38 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	j = i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int		ft_strcount(char **argv)
{
	int i;
	int j;
	int c;

	i = 1;
	c = 0;
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			j++;
			c++;
		}
		i++;
	}
	return (c);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		j;
	char	*tab;

	j = 1;
	if (!(tab = malloc(sizeof(char) * ft_strcount(argv))))
		return (0);
	while (j <= argc - 1)
	{
		ft_strcat(tab, argv[j]);
		if (j != argc - 1)
			ft_strcat(tab, "\n");
		j++;
	}
	return (tab);
}
