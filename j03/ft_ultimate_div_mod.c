/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 15:03:43 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/01 18:52:08 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int division;
	int modulo;

	division = *a / *b;
	modulo = *a % *b;
	*a = division;
	*b = modulo;
}
