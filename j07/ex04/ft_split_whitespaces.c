/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 21:17:56 by jnabet            #+#    #+#             */
/*   Updated: 2018/09/13 16:29:15 by jnabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_word(char *str)
{
	int i;
	int count_word;

	i = 0;
	count_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != 9 && str[i] != '\n' && str[i] != 11)
		{
			count_word += 1;
			while (str[i] != ' ' && str[i] != 9 && str[i] != '\n'
					&& str[i + 1] != '\0' && str[i] != 11)
			{
				i++;
			}
		}
		i++;
	}
	return (count_word);
}

int		ft_size_word(char *str, int *i)
{
	int ptr;
	int size_word;

	ptr = *i;
	size_word = 0;
	while (str[ptr] == ' ' || str[ptr] == 9 || str[ptr] == 11
			|| str[ptr] == '\n')
		ptr++;
	if (str[ptr] != ' ' && str[ptr] != 9 && str[ptr] != '\n'
			&& str[ptr] != '\0' && str[ptr] != 11)
	{
		while (str[ptr] != ' ' && str[ptr] != 9 && str[ptr] != '\n'
				&& str[ptr] != 11 && str[ptr] != '\0')
		{
			ptr++;
			size_word += 1;
		}
		*i = ptr;
		return (size_word);
	}
	ptr++;
	return (0);
}

char	**display(char *str, char **tab, int word)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (j < word)
	{
		while (str[i] == ' ' || str[i] == 9 || str[i] == '\n' || str[i] == 11)
			i++;
		if (str[i] != ' ' && str[i] != 9 && str[i] != '\n' && str[i] != '\0'
				&& str[i] != 11)
		{
			k = 0;
			while (str[i] != ' ' && str[i] != 9 && str[i] != '\n'
					&& str[i] != 11 && str[i] != '\0')
			{
				tab[j][k++] = str[i++];
			}
		}
		tab[j][k] = '\0';
		j++;
		i++;
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		word;
	int		size_word;

	word = ft_count_word(str);
	if (!(tab = (char**)malloc(sizeof(char*) * (word + 1))))
		return (0);
	j = 0;
	i = 0;
	while (j < word)
	{
		size_word = ft_size_word(str, &i);
		if (!(tab[j] = (char*)malloc(sizeof(char) * (size_word + 1))))
			return (0);
		j++;
	}
	tab[word] = 0;
	tab = display(str, tab, word);
	return (tab);
}
