/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 11:08:36 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/17 16:28:25 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *dest;
	int i;

	if (!(dest = (int*)malloc(sizeof(int) * (length - 1))))
		return (0);
	i = 0;
	while (i < length)
	{
		dest[i] = f(tab[i]);
		i++;
	}
	return (dest);
}
