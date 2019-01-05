/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouduri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 15:09:21 by gcouduri          #+#    #+#             */
/*   Updated: 2018/09/16 16:41:26 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"
#include <stdlib.h>
#include "tools.h"
#include "ft_validate.h"

int			ft_get_lines(t_pipe *pipe)
{
	t_pipe	*cur;
	int		i;

	cur = pipe;
	i = 0;
	while (cur)
	{
		if (cur->c == '\n')
			i++;
		cur = cur->next;
	}
	return (i);
}

int			ft_get_cols(t_pipe *pipe)
{
	t_pipe	*cur;
	int		n;
	int		i;

	cur = pipe;
	n = 0;
	i = 0;
	while (cur)
	{
		if (cur->c == '\n')
		{
			if (n && i != n)
				return (0);
			n = i;
			i = 0;
		}
		else
			i++;
		cur = cur->next;
	}
	return (n);
}

int			ft_print_shapes(t_shape *shapes, int col_max, int line_max)
{
	while (shapes)
	{
		ft_putchar('[');
		ft_putstr(shapes->name);
		ft_putstr("] [");
		ft_putnbr(col_max);
		ft_putstr("] [");
		ft_putnbr(line_max);
		ft_putchar(']');
		if (shapes->next)
			ft_putstr(" || ");
		shapes = shapes->next;
	}
	ft_putchar('\n');
	return (0);
}

int			main(void)
{
	t_pipe	*pipe;
	t_shape	*shapes;
	int		line_max;
	int		col_max;

	pipe = ft_get_pipe();
	shapes = ft_get_shapes();
	line_max = ft_get_lines(pipe);
	col_max = ft_get_cols(pipe);
	if (!line_max || !col_max)
		return (ft_error());
	shapes = ft_validate(pipe, &shapes, line_max, col_max);
	if (!shapes)
		return (ft_error());
	return (ft_print_shapes(shapes, col_max, line_max));
}
