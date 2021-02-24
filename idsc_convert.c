/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idsc_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:48:42 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/24 20:07:08 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_putid(s_varg *ftpf)
{
	ft_putnbr_pf(va_arg(*(ftpf->lst), int), &ftpf->nb_print, ftpf->indicator);
}

void	ft_putstring(s_varg *ftpf)
{
	va_list cpy;
	char *str;
	int i;

	i = 0;
	va_copy(cpy, *(ftpf->lst));
	str = va_arg(cpy, char *);
	if (!(str))
	{
		ft_putstr_pf("(null)", &ftpf->nb_print);
		return ;
	}
	if (ftpf->indicator > -1)
	{
		while ((ftpf->indicator)-- > 0)
			ft_putchar_pf(str[i++], &ftpf->nb_print);
		return ;
	}
	ft_putstr_pf(va_arg(*(ftpf->lst), char *), &ftpf->nb_print);
}

void	ft_putcharac(s_varg *ftpf)
{
	ft_putchar_pf(va_arg(*(ftpf->lst), int), &ftpf->nb_print);
}

void	ft_putpct(s_varg *ftpf)
{
	ft_putchar_pf('%', &ftpf->nb_print);
}

