/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:58:51 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 18:39:38 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int		check_flags(s_flags *flags)
{
	if (flags->nb_zero > -1)
		return (1);
	else if (flags->nb_space > -1)
		return (2);
	else if (flags->nb_dash > -1)
		return (3);
	else
		return (0);
}

static void		len_count(s_varg *ftpf, s_flags *flags)
{
	va_list cpy;

	va_copy(cpy, *(ftpf->lst));
	/*if (flags->precision == 0)
	{
		flags->len = 0;
		return ;
	}*/
	if (flags->type == 'd' || flags->type == 'i')
		flags->len = nb_len_dec(va_arg(cpy, int));
	else if (flags->type == 'x' || flags->type == 'X')
		flags->len = nb_len_hex(va_arg(cpy, int));
	else if (flags->type == 'u')
		flags->len = nb_len_unsigned(va_arg(cpy, unsigned int));
	else if (flags->type == 'p')
		flags->len = nb_len_addr(va_arg(cpy, void *));
	else if (flags->type == 's')
		flags->len = nb_len_str(va_arg(cpy, void *));
	else
		flags->len = 1;
}

void			print_flags(s_varg *ftpf, s_flags *flags)
{
	int		tab_flag;
	void	(*fct_flags[4])(s_varg *, s_flags *) =
	{&print_arg, &pf_print_zero, &pf_print_space, &pf_print_dash};

	len_count(ftpf, flags);
	tab_flag = check_flags(flags);
	if (tab_flag == 0 && flags->type != 'c' && flags->type != '%')
		pf_print_precision(ftpf, flags);
	fct_flags[tab_flag](ftpf, flags);
	ftpf->indicator = -1;
}

void			print_arg(s_varg *ftpf, s_flags *flags)
{
	void (*fct_param[9])(s_varg *) =
	{&ft_puthex_min, &ft_puthex_maj, &ft_putaddr,
		&ft_putid, &ft_putid, &ft_putstring,
		&ft_putcharac, &ft_putpct, &ft_putunsigned};
	
	fct_param[flags->eq_type](ftpf);
}
