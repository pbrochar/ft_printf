/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:03:06 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/21 17:48:36 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static void	print(s_varg *test)
{
	test->v_pos++;
	int fct;
	fct = ft_parser(test->str[test->v_pos]);
	void (*tab[9])(s_varg *) = {&ft_puthex_min, &ft_puthex_maj, &ft_putaddr, &ft_putid, &ft_putid, &ft_putstring, &ft_putcharac, &ft_putpct, &ft_putunsigned};
	tab[fct](test);
}

int	ft_printf(const char *format, ...)
{
	va_list parameters;
	s_varg	args;
	
	va_start(parameters, format);
	args.str = format;
	args.v_pos = 0;
	args.lst = &parameters;
	args.len = 0;
	while (format[args.v_pos] != '\0')
	{
		if (format[args.v_pos] != '%')
		{	
			ft_putchar_pf(format[args.v_pos], &args.len);
		}
		else
			print(&args);
		args.v_pos++;
	}
	va_end(parameters);
	return (args.len);
}
