/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:46:07 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/17 16:40:08 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0 || f(tab[i], tab[i + 1]) == 0)
			i++;
		else
		{
			i = 0;
			while (i < length - 1)
			{
				if (f(tab[i], tab[i + 1]) > 0 || f(tab[i], tab[i + 1]) == 0)
					i++;
				else
					return (0);
			}
		}
	}
	return (1);
}
