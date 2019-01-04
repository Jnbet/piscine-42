/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:30:16 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/17 20:38:56 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}

int		ft_atoi(char *str)
{
	int i;
	int signe;
	int res;

	i = 0;
	signe = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' ||
			str[i] == '\r' || str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		i++;
		signe = -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += (str[i] - 48);
		i++;
	}
	return (res * signe);
}
