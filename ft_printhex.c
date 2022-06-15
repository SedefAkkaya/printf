/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 03:33:55 by sakkaya           #+#    #+#             */
/*   Updated: 2022/04/14 15:34:22 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_hex(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_printhex(unsigned int n, char format)
{
	if (n >= 16)
	{
		ft_printhex(n / 16, format);
		ft_printhex(n % 16, format);
	}
	else if (n > 9)
	{
		if (format == 'x')
			ft_putchar((n - 10) + 'a');
		if (format == 'X')
			ft_putchar((n - 10) + 'A');
	}
	else
		ft_putchar(n + 48);
	return (ft_len_hex(n));
}
