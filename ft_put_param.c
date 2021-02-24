/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:45:54 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/24 17:16:12 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	count_flags(s_varg *ftpf)
{
	int nb;

	nb = 0;
	ftpf->pos++;
	if (ftpf->str[ftpf->pos] == '*')
	{
		nb = va_arg(*(ftpf->lst), int);
		ftpf->pos++;
	}
	else if (ft_isdigit(ftpf->str[ftpf->pos]))
	{
		nb = ft_atoi(&(ftpf->str[ftpf->pos]));
		ftpf->pos += nb_len_dec(nb);
	}
	return (nb);
}

static void	init_param(s_varg *ftpf, s_flags *flags)
{
	if (ftpf->str[ftpf->pos] == '0')
		flags->nb_zero = count_flags(ftpf);
	else if (ftpf->str[ftpf->pos] == '-')
		flags->nb_dash = count_flags(ftpf);
	else if (ftpf->str[ftpf->pos] != '.' && pf_istype(ftpf->str[ftpf->pos]) == -1)
		flags->nb_space = count_flags(ftpf);
	if (ftpf->str[ftpf->pos] == '.')
		flags->precision = count_flags(ftpf);
	flags->eq_type = pf_istype(ftpf->str[ftpf->pos]);
	flags->type = ftpf->str[ftpf->pos];
}

void	ft_put_param(s_varg *ftpf)
{
	s_flags	flags;

	init_s_flags(&flags);
	ftpf->pos++;
	init_param(ftpf, &flags);
/*
	printf("nb_zero : %d\n", flags.nb_zero);
	printf("nb_dash : %d\n", flags.nb_dash);
	printf("nb_space : %d\n", flags.nb_space);
	printf("precision: %d\n", flags.precision);
	printf("len : %d\n", flags.len);
	printf("eq_type : %d\n" , flags.eq_type);
	printf("type : %c\n", flags.type);
	printf("len pointer : %d\n", nb_len_addr(ftpf));*/
	print_flags(ftpf, &flags);
}
