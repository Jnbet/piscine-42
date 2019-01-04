/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 12:23:16 by jnabet            #+#    #+#             */
/*   Updated: 2018/08/31 15:45:19 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int l;

	l = 'a';
	while (l <= 'z')
	{
		ft_putchar(l);
		l++;
	}
}
