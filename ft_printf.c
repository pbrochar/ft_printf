/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:03:06 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/21 15:54:51 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static void	print(s_varg *test)
{
	test->v_pos++;
	int fct;
	fct = ft_parser(test->str[test->v_pos]);
	void (*tab[8])(s_varg *) = {&ft_puthex_min, &ft_puthex_maj, &ft_putaddr, &ft_putid, &ft_putid, &ft_putstr_pf, &ft_putchar_pf, &ft_putpct};
	tab[fct](test);
}

void	ft_printf(const char *format, ...)
{
	va_list parameters;
	s_varg	args;
	
	va_start(parameters, format);
	args.str = format;
	args.v_pos = 0;
	args.upper = 0;
	args.lst = &parameters;
	while (format[args.v_pos] != '\0')
	{
		if (format[args.v_pos] != '%')
			ft_putchar_fd(format[args.v_pos], 1);
		else
			print(&args);
		args.v_pos++;
	}
	va_end(parameters);
}
