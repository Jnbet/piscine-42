/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 10:33:22 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/02 13:32:44 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int cpt;
	int resultat;
	int signe;

	resultat = 0;
	signe = 1;
	cpt = 0;
	while (str[cpt] == ' ' || str[cpt] == '\t' || str[cpt] == '\v' ||
			str[cpt] == '\r' || str[cpt] == '\f' || str[cpt] == '\n')
		cpt++;
	if (str[cpt] == '-')
	{
		cpt++;
		signe = -1;
	}
	else if (str[cpt] == '+')
		cpt++;
	while (str[cpt] >= '0' && str[cpt] <= '9')
	{
		resultat = resultat * 10;
		resultat = resultat + (str[cpt] - 48);
		cpt++;
	}
	return (resultat * signe);
}
