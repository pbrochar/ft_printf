/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:00:30 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/24 14:52:55 by pbrochar         ###   ########.fr       */
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
	flags->nb_zero = -1;
	flags->nb_dash = -1;
	flags->nb_space = -1;
	flags->precision = -1;
	flags->len = -1;
	flags->eq_type = -1;
	flags->type = '\0';
}
