/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wael-mos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:21:02 by wael-mos          #+#    #+#             */
/*   Updated: 2018/09/02 23:18:07 by wael-mos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	start(int x, int y)
{
	int		c;

	if (x >= 1 && y > 0)
	{
		c = 0;
		ft_putchar('A');
		while (c < (x - 2))
		{
			ft_putchar('B');
			++c;
		}
		if (x > 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void	end(int x, int y)
{
	int		c;

	if (x >= 1 && y > 1)
	{
		c = 0;
		ft_putchar('A');
		while (c < (x - 2))
		{
			ft_putchar('B');
			++c;
		}
		if (x > 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int		c;
	int		i;

	i = 0;
	start(x, y);
	if (x > 0 && y > 0)
	{
		while (i < (y - 2))
		{
			c = 0;
			if (x != 0)
				ft_putchar('B');
			while (c < (x - 2))
			{
				ft_putchar(' ');
				++c;
			}
			++i;
			if (x > 1)
				ft_putchar('B');
			ft_putchar('\n');
		}
	}
	end(x, y);
}
