/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:06:08 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/24 18:04:59 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void pf_print_zero(s_varg *ftpf, s_flags *flags)
{
	int total;
	va_list cpy;

	va_copy(cpy, *(ftpf->lst));
	total = (flags->nb_zero) - (flags->len);
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
