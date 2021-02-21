/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idsc_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:48:42 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/21 17:53:29 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_putid(s_varg *ftpf)
{
	ft_putnbr_pf(va_arg(*(ftpf->lst), int), &ftpf->len);
}

void	ft_putstring(s_varg *ftpf)
{
	if (!(va_arg(*(ftpf->lst), char *)))
	{
		ft_putstr_pf("(null)", &ftpf->len);
		return ;
	}
	ft_putstr_pf(va_arg(*(ftpf->lst), char *), &ftpf->len);
}

void	ft_putcharac(s_varg *ftpf)
{
	ft_putchar_pf(va_arg(*(ftpf->lst), int), &ftpf->len);
}

void	ft_putpct(s_varg *ftpf)
{
	ft_putchar_pf('%', &ftpf->len);
}

