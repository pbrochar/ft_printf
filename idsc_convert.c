/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idsc_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:48:42 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/24 16:27:17 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_putid(s_varg *ftpf)
{
	ft_putnbr_pf(va_arg(*(ftpf->lst), int), &ftpf->nb_print);
}

void	ft_putstring(s_varg *ftpf)
{
	va_list cpy;
	va_copy(cpy, *(ftpf->lst));
	
	if (!(va_arg(cpy, char *)))
	{
		ft_putstr_pf("(null)", &ftpf->nb_print);
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

