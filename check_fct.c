/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:50:43 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 18:30:53 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int check_format(s_varg *ftpf)
{
	(ftpf->pos)++;
	return (0);
}

int	check_fct(s_varg *ftpf)
{
	while (ftpf->str[ftpf->pos])
	{
		if (ftpf->str[ftpf->pos] == '%')
		{
			if (check_format(ftpf) == -1)
				return (-1);
		}
		(ftpf->pos)++;
	}
	return (0);
}
