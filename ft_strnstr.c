/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:20:48 by jibot             #+#    #+#             */
/*   Updated: 2021/10/26 20:38:20 by jibot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	while (haystack[i] && i < len)
	{
		n = 0;
		if (needle[0] == '\0')
			return ((char *)haystack);
		while (haystack[i] && haystack[i] != needle[n] && i < len)
			i++;
		while (haystack[i] && haystack[i] == needle[n] && i < len)
		{
			i++;
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + i - n);
	}
	return (NULL);
}
