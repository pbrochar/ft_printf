/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:27:52 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/23 16:09:36 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_printf.h"

void	ft_putnbr_pf(int n, size_t *i)
{
	unsigned int nbr;

	if (n < 0)
	{
		nbr = -n;
		ft_putchar_pf('-', i);
	}
	else
		nbr = n;
	if (nbr > 9)
	{
		ft_putnbr_pf(nbr / 10, i);
		ft_putchar_pf((nbr % 10) + '0', i);
	}
	else
		ft_putchar_pf(nbr + '0', i);
}

void	ft_putchar_pf(char c, size_t *i)
{
	write(1, &c, 1);
	(*i)++;
}
void	ft_putstr_pf(char *s, size_t *i)
{
	int a;

	a = ft_strlen(s);
	write(1, s, a);
	(*i) += a;
}

int nb_len_dec(int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int nb_len_hex(int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

