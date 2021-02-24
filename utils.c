/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:27:52 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/24 16:16:05 by pbrochar         ###   ########.fr       */
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

int	nb_len_addr(s_varg *ftpf)
{
	size_t 	b;
	int 	i;
	int 	nb;
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
int nb_len_unsigned(unsigned int nb)
{
	unsigned int 	unsign_max;
	int 			i;

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
