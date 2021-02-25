/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idsc_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:48:42 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 15:46:18 by pbrochar         ###   ########.fr       */
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
	char	*str;
	char	*null;
	int		i;

	i = 0;
	null = "(null)";
	str = va_arg(*(ftpf->lst), char *);
	if (ftpf->indicator > -1  && str)
	{
		while ((ftpf->indicator)-- > 0)
			ft_putchar_pf(str[i++], &ftpf->nb_print);
		return ;
	}
	if (!str)
	{
		if (ftpf->indicator > -1)
			while ((ftpf->indicator)-- > 0)
				ft_putchar_pf(null[i++], &ftpf->nb_print);
		else
			ft_putstr_pf(null, &ftpf->nb_print);
		return ;
	}
	ft_putstr_pf(str, &ftpf->nb_print);
}

void	ft_putcharac(s_varg *ftpf)
{
	ft_putchar_pf(va_arg(*(ftpf->lst), int), &ftpf->nb_print);
}

void	ft_putpct(s_varg *ftpf)
{
	ft_putchar_pf('%', &ftpf->nb_print);
}
