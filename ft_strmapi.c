/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:01:55 by jibot             #+#    #+#             */
/*   Updated: 2021/10/25 18:39:37 by jibot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*tab;

	len = 0;
	while (s[len])
		len++;
	tab = malloc(len);
	len = 0;
	while (s[len])
	{
		tab[len] = f(len, s[len]);
		len++;
	}
	tab[len] = '\0';
	return (tab);
}
