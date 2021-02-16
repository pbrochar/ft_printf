/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_convert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:22:03 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/16 11:29:33 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_printunsigned(unsigned int nb)
{
	if (nb > 9)
	{
		ft_printunsigned(nb / 10);
		ft_putchar_fd((nb % 10) + '0', 1);
	}
	else
		ft_putchar_fd((nb % 10) + '0', 1);
}

void		ft_putunsigned(unsigned int nb)
{
	unsigned int unsign_max;
   
	unsign_max = 4294967295;
	if (nb < 0)
		nb = nb + unsign_max + 1;
	ft_printunsigned(nb);
}
