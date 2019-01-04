/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:42:37 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/13 16:35:18 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (range == 0)
		return (0);
	i = 0;
	size = 0;
	if (min >= max)
		return (0);
	else
	{
		while (min + size < max)
			size++;
		if (!(tab = (int*)malloc(sizeof(int) * size)))
			return (0);
		while (i < size)
		{
			tab[i] = min + i;
			i++;
		}
	}
	range[0] = tab;
	return (size);
}
