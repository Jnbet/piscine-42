/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:41:27 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/08 11:20:41 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;
	unsigned int	s;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	i++;
	j++;
	s = i + j;
	return (s);
}
