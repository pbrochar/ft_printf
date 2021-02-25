/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:16:06 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 14:55:12 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int			ft_printf(const char *format, ...)
{
	va_list parameters;
	s_varg	ftpf;

	va_start(parameters, format);
	init_s_varg(&ftpf, format, &parameters);
	while (format[ftpf.pos])
	{
		if (format[ftpf.pos] != '%')
			ft_putchar_pf(format[ftpf.pos], &ftpf.nb_print);
		else
			ft_put_param(&ftpf);
		ftpf.pos++;
	}
	va_end(parameters);
	return (ftpf.nb_print);
}
