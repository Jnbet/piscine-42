/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouduri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 13:59:40 by gcouduri          #+#    #+#             */
/*   Updated: 2018/09/16 21:15:04 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nbr)
{
	unsigned int n;

	if (nbr < 0)
		ft_putchar('-');
	n = nbr < 0 ? -nbr : nbr;
	if (n / 10 == 0)
		return (ft_putchar(n + '0'));
	ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		ft_error(void)
{
	write(1, "aucune\n", 7);
	return (0);
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
