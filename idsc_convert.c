/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idsc_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:48:42 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/21 15:55:13 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_putid(s_varg *ftpf)
{
	ft_putnbr_fd(va_arg(*(ftpf->lst), int), 1);
}

void	ft_putstr_pf(s_varg *ftpf)
{
	ft_putstr_fd(va_arg(*(ftpf->lst), char *), 1);
}

void	ft_putchar_pf(s_varg *ftpf)
{
	ft_putchar_fd(va_arg(*(ftpf->lst), int), 1);
}

void	ft_putpct(s_varg *ftpf)
{
	(void)ftpf;
	write(1, "%", 1);
}

