/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:21:02 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/13 16:35:05 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*dest;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	if (!(dest = (char *)malloc(sizeof(char) * size)))
		return (0);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
