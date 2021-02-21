/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pxX_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:28:10 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/21 15:05:40 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	ft_printhex(int v, int upper)
{
	if (v >= 0 && v < 10)
		ft_putchar_fd('0' + v, 1);
	else
		if (upper == 0)
			ft_putchar_fd('a' + v - 10, 1);
		else
			ft_putchar_fd('A' + v - 10, 1);
}

void	ft_putaddr(s_varg *ftpf)
{
	size_t 	b;
	int		i;
	void	*ptr;

	ptr = va_arg(*(ftpf->lst), void *);
	b = (size_t)ptr;
	i = (sizeof(b) << 3) - 4;
	ft_putstr_fd("0x", 1);
	while (((b >> i) & 0xf) == 0)
		i -= 4;
	while (i >= 0)
	{
		ft_printhex((b >> i) & 0xf, 0);
		i -= 4;
	}
}

void	ft_puthex_min(s_varg *ftpf)
{
	int i;
	int nb;

	nb = va_arg(*(ftpf->lst), int);
	i = (sizeof(nb) << 3) - 4;
	while (((nb >> i) & 0xf) == 0)
		i -= 4;
	while (i >= 0)
	{
		ft_printhex((nb >> i) & 0xf, 0);
		i -= 4;
	}
}

void	ft_puthex_maj(s_varg *ftpf)
{
	int i;
	int nb;

	nb = va_arg(*(ftpf->lst), int);
	i = (sizeof(nb) << 3) - 4;
	while (((nb >> i) & 0xf) == 0)
		i -= 4;
	while (i >= 0)
	{
		ft_printhex((nb >> i) & 0xf, 1);
		i -= 4;
	}

}
