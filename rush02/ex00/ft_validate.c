/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:34:54 by luiberna          #+#    #+#             */
/*   Updated: 2018/09/16 16:37:01 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"
#include <stdlib.h>
#include "tools.h"

int			ft_pattern_idx(int line, int col, int line_max, int col_max)
{
	if (line == 0)
	{
		if (col == 0)
			return (0);
		if (col == col_max - 1)
			return (1);
		return (4);
	}
	if (line == line_max - 1)
	{
		if (col == 0)
			return (2);
		if (col == col_max - 1)
			return (3);
		return (4);
	}
	if (col == 0 || col == col_max - 1)
		return (5);
	return (6);
}

t_shape		*ft_valid(char c, int pattern_idx, t_shape *cur)
{
	t_shape	*list;
	t_shape	*last;
	t_shape	*nxt;

	list = NULL;
	while (cur)
	{
		nxt = cur->next;
		if (c == cur->pattern[pattern_idx])
		{
			cur->next = NULL;
			if (!list)
				list = cur;
			else
				last->next = cur;
			last = cur;
		}
		else
			free(cur);
		cur = nxt;
	}
	return (list);
}

t_shape		*ft_validate(t_pipe *pipe, t_shape **shapes, int l_max, int c_max)
{
	int		l;
	int		c;
	t_shape	*cur;

	cur = *shapes;
	l = 0;
	c = 0;
	while (pipe)
	{
		if (pipe->c == '\n')
		{
			c = 0;
			l++;
		}
		else
		{
			cur = ft_valid(pipe->c, ft_pattern_idx(l, c, l_max, c_max), cur);
			if (!shapes)
				return (NULL);
			c++;
		}
		pipe = pipe->next;
	}
	return (cur);
}
