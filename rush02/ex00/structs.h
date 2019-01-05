/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouduri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 20:59:49 by gcouduri          #+#    #+#             */
/*   Updated: 2018/09/16 14:39:35 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct	s_shape
{
	char			*name;
	char			*pattern;
	struct s_shape	*next;
}				t_shape;
typedef struct	s_pipe
{
	char			c;
	struct s_pipe	*next;
}				t_pipe;
t_shape			*ft_get_shapes(void);
t_pipe			*ft_get_pipe(void);
#endif
