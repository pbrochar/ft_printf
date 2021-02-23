/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:41:22 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/21 19:53:43 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	 ft_parser(char c)
{
	int i;
	char *type;

	type = "xXpdisc%u";
	i = 0;
	while (type[i])
	{
		if (type[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int ft_parser_flag(char c)
{
	int i;
	char *flag;

	flag = "0";
	i = 0;
	while (flag[i])
	{
		if (flag[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
