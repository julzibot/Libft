/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:12:59 by jibot             #+#    #+#             */
/*   Updated: 2021/10/29 17:08:00 by jibot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int srclen;
	size_t i;

	i = 0;
	srclen = ft_strlen((char *)src);
	if (dstsize < 0)
		return (srclen);
	dst[dstsize - 1] = 0;
	while (src[i] && i < dstsize)
	{
		i++;
		dst[dstsize - i - 1] = src[dstsize - i - 1];
	}
	return (srclen);
}
