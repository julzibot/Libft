/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:44:51 by jibot             #+#    #+#             */
/*   Updated: 2021/10/27 19:05:22 by jibot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int get_power(int n)
{
	int power;

	power = 0;
	while (abs(n) >= 10)
	{
		n /= 10;
		power++;
	}
	return (power);
}

char	*ft_itoa(int n)
{
	int mod;
	int power;
	int sign;
	char *nbr;

	if (n == -2147483648)
	{
		nbr = ft_strdup("-2147483648");
		return (nbr);
	}
	power = get_power(n);
	sign = 0;
	if (n < 0)
		sign++;
	nbr = malloc(power + sign + 2);
	nbr[power + sign + 1] = '\0';
	while (power >= 0)
	{
		mod = abs(n) % 10;
		n /= 10;
		nbr[power + sign] = mod + '0';
		power--;
	}
	if (sign != 0)
		nbr[0] = '-';
	return (nbr);
}
