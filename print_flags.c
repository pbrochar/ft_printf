/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:06:08 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/24 20:20:21 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
static int pf_calcul_total(s_flags *flags, int flag_type)
{
	int total;

	total = flag_type - flags->len;
	if (flags->len < flags->precision && (flags->type == 'd' 
				|| flags->type == 'i' || flags->type == 'x' || flags->type == 'X' || flags->type == 'u'))
		total -= (flags->precision - flags->len);
	if (flags->len > flags->precision && flags->type == 's')
		total += (flags->len - flags->precision);
	return (total);
}

void pf_print_zero(s_varg *ftpf, s_flags *flags)
{
	int total;
	va_list cpy;

	va_copy(cpy, *(ftpf->lst));
	total = (flags->nb_zero) - (flags->len);
	if (flags->precision > -1)
	{
		flags->nb_space = flags->nb_zero;
		pf_print_space(ftpf, flags);
		return ;
	}
	if (va_arg(cpy, int) < 0 && (flags->type == 'd' || flags->type == 'i'))
	{
		ft_putchar_pf('-', &ftpf->nb_print);
		ftpf->indicator = 0;
		total--;
	}
	while (total-- > 0)
		ft_putchar_pf('0', &ftpf->nb_print);
	print_arg(ftpf, flags);
}

void pf_print_space(s_varg *ftpf, s_flags *flags)
{
	int total;
	va_list cpy;

	va_copy(cpy, *(ftpf->lst));
	total = pf_calcul_total(flags, flags->nb_space);
	if (va_arg(cpy, int) < 0 && (flags->type == 'd' || flags->type == 'i'))
		total--;
	while (total-- > 0)
		ft_putchar_pf(' ', &ftpf->nb_print);
	pf_print_precision(ftpf, flags);
	print_arg(ftpf, flags);
}

void pf_print_dash(s_varg *ftpf, s_flags *flags)
{
	int 	total;
	va_list cpy;

	va_copy(cpy, *(ftpf->lst));
	total = pf_calcul_total(flags, flags->nb_dash);
	if (va_arg(cpy, int) < 0 && (flags->type == 'd' || flags->type == 'i'))
		total--;
	pf_print_precision(ftpf, flags);
	print_arg(ftpf, flags);
	while (total-- > 0)
		ft_putchar_pf(' ', &ftpf->nb_print);
}
void pf_print_precision(s_varg *ftpf, s_flags *flags)
{
	if ((flags->type == 'd' || flags->type == 'i' || flags->type == 'u' || flags->type == 'x' ||
			   	flags->type == 'X') && (flags->precision > flags->len))
		while ((flags->precision)-- > flags->len)
			ft_putchar_pf('0', &ftpf->nb_print);
	if (flags->type == 's' && (flags->precision < flags->len))
		ftpf->indicator = flags->precision;
}
