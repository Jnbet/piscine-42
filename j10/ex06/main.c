/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:40:49 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/17 20:54:46 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "tool.h"

int		ft_ope_check(char *argv)
{
	if (argv[1] != '\0')
		return (0);
	else
		return (1);
}

int		ft_error(char ope, int valeur2)
{
	int error;

	error = 0;
	if (ope == '%' && valeur2 == 0)
		error = 1;
	if (ope == '/' && valeur2 == 0)
		error = 2;
	return (error);
}

void	ft_calc(int valeur1, char ope, int valeur2)
{
	int res;

	res = 0;
	if (ope == '+')
		res = valeur1 + valeur2;
	if (ope == '-')
		res = valeur1 - valeur2;
	if (ope == '*')
		res = valeur1 * valeur2;
	if (ope == '/')
		res = valeur1 / valeur2;
	if (ope == '%')
		res = valeur1 % valeur2;
	ft_putnbr(res);
}

int		main(int argc, char **argv)
{
	int		valeur1;
	char	ope;
	int		valeur2;

	if (argc != 4)
		return ('0');
	valeur1 = ft_atoi(argv[1]);
	ope = *(argv[2]);
	valeur2 = ft_atoi(argv[3]);
	if (ft_ope_check(argv[2]) == 0)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	if (ft_error(ope, valeur2) == 1)
		ft_putstr("Stop : modulo by zero");
	if (ft_error(ope, valeur2) == 2)
		ft_putstr("Stop : division by zero");
	if (ft_error(ope, valeur2) == 0)
		ft_calc(valeur1, ope, valeur2);
	ft_putchar('\n');
	return (0);
}
