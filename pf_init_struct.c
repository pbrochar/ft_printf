/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:00:30 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/23 17:09:51 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	init_s_varg(s_varg *ftpf, const char *format, va_list *parameters)
{
	ftpf->str = format;
	ftpf->pos = 0;
	ftpf->lst = parameters;
	ftpf->nb_print = 0;
}

void	init_s_flags(s_flags *flags)
{
	flags->is_zero = 0;
	flags->is_dash = 0;
	flags->nb_zd = 0;
	flags->nb_space = 0;
	flags->precision = 0;
	flags->len = 0;
	flags->eq_type = 0;
	flags->type = '\0';
}

