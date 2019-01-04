/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 16:07:57 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/02 18:23:50 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int compare;

	size--;
	while (size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[size])
			{
				compare = tab[i];
				tab[i] = tab[size];
				tab[size] = compare;
			}
			i++;
		}
		size--;
	}
}
