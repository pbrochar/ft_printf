/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 20:43:32 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/24 20:45:49 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int			nb_len_dec(int n)
{
	unsigned int	nb;
	int				i;

	i = 0;
	if (n < 0)
		nb = -n;
	else
		nb = n;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int			nb_len_hex(int n)
{
	int i;
	int count;

	count = 0;
	i = (sizeof(n) << 3) - 4;
	while (((n >> i) & 0xf) == 0)
		i -= 4;
	while (i >= 0)
	{
		count++;
		i -= 4;
	}
	return (count);
}

int			nb_len_addr(s_varg *ftpf)
{
	size_t	b;
	int		i;
	int		nb;
	void	*ptr;
	va_list	cpy;

	nb = 0;
	va_copy(cpy, *(ftpf->lst));
	ptr = va_arg(*(ftpf->lst), void *);
	if (!ptr)
		return (5);
	b = (size_t)ptr;
	i = (sizeof(b) << 3) - 4;
	while (((b >> i) & 0xf) == 0)
		i -= 4;
	while (i >= 0)
	{
		nb++;
		i -= 4;
	}
	return (nb + 2);
}

int			nb_len_unsigned(unsigned int nb)
{
	unsigned int	unsign_max;
	int				i;

	unsign_max = 4294967295;
	i = 0;
	if (nb < 0)
		nb = nb + unsign_max + 1;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
