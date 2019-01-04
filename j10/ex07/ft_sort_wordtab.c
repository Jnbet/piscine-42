/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:16:43 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/18 11:37:28 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_swap(char **tab, int i)
{
	char *temp;

	temp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = temp;
	return (tab);
}

void	ft_sort_char(char **tab, int length)
{
	int		i;
	int		j;

	i = 0;
	while (i < (length - 1))
	{
		j = 0;
		while (tab[i][j] == tab[i + 1][j])
			j++;
		if (tab[i][j] > tab[i + 1][j])
		{
			ft_swap(tab, i);
			i = -1;
		}
		i++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int size;

	size = 0;
	while (tab[size])
		size++;
	ft_sort_char(tab, size);
}
