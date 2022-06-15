/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 03:30:00 by sakkaya           #+#    #+#             */
/*   Updated: 2022/04/13 17:00:00 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	x;

	x = n;
	len = ft_len(x);
	s = (char *)malloc(len + 1);
	if (!s)
		return (0);
	s[len] = '\0';
	if (x < 0)
	{
		s[0] = '-';
		x *= -1;
	}
	while (x != 0)
	{
		s[--len] = (x % 10) + 48;
		x = x / 10;
	}
	return (s);
}
