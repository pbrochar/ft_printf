/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:16:06 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/23 15:29:06 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	init_s_varg(s_varg *args, const char *format, va_list *parameters)
{
	args->str = format;
	args->pos = 0;
	args->lst = parameters;
	args->nb_print = 0;
}

int			ft_printf(const char *format, ...)
{
	va_list parameters;
	s_varg	args;
	
	va_start(parameters, format);
	init_s_varg(&args, format, &parameters);
	printf("v_pos %d\n", args.pos);

	va_end(parameters);
	return (args.nb_print);
}
