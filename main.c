/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:57:34 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/15 19:47:05 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

int		main(void)
{
	char	a;
	char	*ptr;
	unsigned int b = 10;

	ptr = &a;
	printf("%p\n", ptr);
	ft_putaddr((void *)ptr);
	ft_putchar_fd('\n', 1);
	ft_puthex(1566565, 0);
	ft_putchar_fd('\n', 1);
	printf("pourcent u : %u\n", b);
	ft_putunsigned((unsigned int)b);
	printf("\npct d = %i\n", 10);
	ft_putnbr_fd(10,1);
	ft_putprct();
	return (0);
}
