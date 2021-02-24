/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:58:51 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/24 16:29:03 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
static int check_struct(s_flags *flags)
{
	if (flags->nb_zero > -1)
		return (1);
	else if (flags->nb_dash > -1)
		return (2);
	else if (flags->nb_space > -1)
		return (3);
	else
		return (0);
}
void	print_arg(s_varg *ftpf, s_flags *flags)
{
	void (*fct_param[9])(s_varg *) = {&ft_puthex_min, &ft_puthex_maj, &ft_putaddr, &ft_putid, &ft_putid, &ft_putstring, &ft_putcharac, &ft_putpct, &ft_putunsigned};

	printf("eq type : %d\n", flags->eq_type);
	if (check_struct(flags) == 0)
	{
		fct_param[flags->eq_type](ftpf);
	}

} 
