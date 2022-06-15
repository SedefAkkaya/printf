/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 03:49:17 by sakkaya           #+#    #+#             */
/*   Updated: 2022/04/14 15:40:18 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char			*s;
	int				len;
	unsigned int	i;

	len = ft_len_unsigned(n);
	s = malloc(len * (sizeof(char) + 1));
	s[len] = '\0';
	if (n == 0)
	{
		s[--len] = 48;
		return (s);
	}
	while (n)
	{
		i = n;
		i %= 10;
		s[--len] = i + 48;
		n /= 10;
	}
	return (s);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*s;

	len = 0;
	s = ft_uitoa(n);
	if (!s)
	{
		return (len);
	}
	len = ft_printstr(s);
	free (s);
	return (len);
}
