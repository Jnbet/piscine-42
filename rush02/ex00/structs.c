/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouduri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 20:59:40 by gcouduri          #+#    #+#             */
/*   Updated: 2018/09/16 16:27:29 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include "structs.h"

t_pipe		*ft_create_pipe(char c, t_pipe *prev)
{
	t_pipe	*elem;

	elem = malloc(sizeof(t_pipe));
	if (elem)
	{
		elem->c = c;
		elem->next = NULL;
		if (prev)
			prev->next = elem;
	}
	return (elem);
}

t_pipe		*ft_get_pipe(void)
{
	t_pipe	*list;
	t_pipe	*cur;
	char	buffer[1];

	list = NULL;
	cur = NULL;
	while (read(0, buffer, 1) > 0)
	{
		cur = ft_create_pipe(buffer[0], cur);
		if (!list)
			list = cur;
	}
	return (list);
}

t_shape		*ft_create_shape(char *name, char *pattern, t_shape *prev)
{
	t_shape	*elem;

	elem = malloc(sizeof(t_shape));
	if (elem)
	{
		elem->name = name;
		elem->pattern = pattern;
		elem->next = NULL;
		if (prev)
			prev->next = elem;
	}
	return (elem);
}

t_shape		*ft_get_shapes(void)
{
	t_shape	*list;
	t_shape	*cur;

	cur = NULL;
	list = ft_create_shape("colle-00", "oooo-| ", cur);
	cur = list;
	cur = ft_create_shape("colle-01", "/\\\\/** ", cur);
	cur = ft_create_shape("colle-02", "AACCBB ", cur);
	cur = ft_create_shape("colle-03", "ACACBB ", cur);
	cur = ft_create_shape("colle-04", "ACCABB ", cur);
	return (list);
}
