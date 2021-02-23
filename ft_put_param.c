/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:45:54 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/23 17:15:00 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	init_param(s_varg *ftpf, s_flags *flags)
{
	if (ftpf->str[ftpf->pos] == '0')
	{
		flags->is_zero = 1;
		ftpf->pos++;
	}
	else if (ftpf->str[ftpf->pos] == '-')
	{
		flags->is_dash = 1;
		ftpf->pos++;
	}
	else if (ftpf->str[ftpf->pos] == '*')
	{
		flags->nb_space = va_arg(*(ftpf->lst), int);
		ftpf->pos++;
	}
	else if (ft_isdigit(ftpf->str[ftpf->pos]))
	{
		flags->nb_space = ft_atoi(&(ftpf->str[ftpf->pos]));
		ftpf->pos += nb_len_dec(flags->nb_space);
	}
}

static void init_flags(s_varg *ftpf, s_flags *flags)
{
	if (ftpf->str[ftpf->pos] == '*')
	{
		flags->nb_zd = va_arg(*(ftpf->lst), int);
		ftpf->pos++;
	}
	else if (ft_isdigit(ftpf->str[ftpf->pos]))
	{
		flags->nb_zd = ft_atoi(&(ftpf->str[ftpf->pos]));
		ftpf->pos += nb_len_dec(flags->nb_zd);
	}
}
static void init_precision(s_varg *ftpf, s_flags *flags)
{
	if (ftpf->str[ftpf->pos] == '.')
	{
		ftpf->pos++;
		if (ftpf->str[ftpf->pos] == '*')
		{
			flags->precision = va_arg(*(ftpf->lst), int);
			ftpf->pos++;
		}
		else if (ft_isdigit(ftpf->str[ftpf->pos]))
		{
			flags->precision = ft_atoi(&(ftpf->str[ftpf->pos]));
			ftpf->pos += nb_len_dec(flags->nb_zd);
		}
	}
}

static void init_type(s_varg *ftpf, s_flags *flags)
{
	flags->eq_type = pf_istype(ftpf->str[ftpf->pos]);
	flags->type = ftpf->str[ftpf->pos];
}

void	ft_put_param(s_varg *ftpf)
{
	s_flags	flags;

	init_s_flags(&flags);
	ftpf->pos++;
	init_param(ftpf, &flags);
	init_flags(ftpf, &flags);
	init_precision(ftpf, &flags);
	init_type(ftpf, &flags);
}
