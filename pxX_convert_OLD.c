/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pxX_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:51:13 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/15 18:55:01 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_printhex(size_t nb, char *base)
{
	if (nb >= 1)
	{
		ft_printhex(nb / 16, base);
		ft_putchar_fd(base[nb % 16], 1);
	}
}

void		ft_puthex(size_t nb, int upper)
{
	char *lower_hex;
	char *upper_hex;

	lower_hex = "0123456789abcdef";
	upper_hex = "0123456789ABCDEF";
	if (upper == 0)
		ft_printhex(nb, lower_hex);
	else
		ft_printhex(nb, upper_hex);
}

void		ft_putaddr(void *ptr)
{
	char	*base;
	size_t	addr;

	addr = (size_t)ptr;
	base = "0123456789abcdef";
	ft_putstr_fd("0x", 1);
	ft_printhex(addr, base);
}

