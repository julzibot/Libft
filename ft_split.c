/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:18:53 by jibot             #+#    #+#             */
/*   Updated: 2021/10/29 15:12:31 by jibot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strseg(const char *str, char c)
{
	int i;
	char *tab;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	tab = malloc(sizeof(char) * i);
	i = 0;
	while (str[i] && str[i] != c)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

unsigned int size_count(const char *str, char c)
{
	unsigned int i;
	unsigned int size;

	i = 0;
	size = 0;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c)
		{
			size++;
			while (str[i] == c)
				i++;
			if (str[i] == '\0')
				return (size);
		}
		i++;
	}
	if (str[i] == '\0' && str[i - 1] != c)
		size++;
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int i;
	unsigned int n;
	char **ftab;

	if (s == NULL || !(*s))
	{
		ftab = malloc(sizeof(char *));
		ftab[0] = NULL;
		return (ftab);
	}
	i = 0;
	n = 0;
	ftab = malloc(sizeof(char *) * (size_count(s, c) + 1));
	while (n < size_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		ftab[n] = strseg(s + i, c);
		n++;
		while (s[i] && s[i] != c)
			i++;
	}
	ftab[n] = NULL;
	return (ftab);
}
