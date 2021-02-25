/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:50:43 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 17:25:15 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int check_format(s_varg *ftpf)
{
	(ftpf->pos)++;
	if (ftpf->str[ftpf->pos] == '-' && ftpf->str[ftpf->pos + 1] == '0')
		return (-1);
	else if (ftpf->str[ftpf->pos] == '0' && ftpf->str[ftpf->pos + 1] == '-')
		return (-1);
	if (ft_strchr("0-.", ftpf->str[ftpf->pos]) && count_flags(ftpf) < 0)
		return (-1);
	else if (ftpf->str[ftpf->pos] != '.' && pf_istype(ftpf->str[ftpf->pos]) == -1)
	{
		(ftpf->pos)--;
		if (count_flags(ftpf) < 0)
			return (-1);
	}
	if (ftpf->str[ftpf->pos] == '.' && count_flags(ftpf) < 0)
		return (-1);
	if (!(pf_istype(ftpf->str[ftpf->pos])))
		return (-1);
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
