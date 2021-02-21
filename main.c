/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:03:20 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/21 17:56:37 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	main(void)
{
	int age;
	int *p_age;
	age = 244323;
	p_age = &age;
	ft_printf("%d\n", ft_printf("%p\n", p_age));
	printf("%d\n", printf("%p\n", p_age));
	/*
	ft_printf("mon age : %d ans\n", age);
	ft_printf("nb : %d\n", ft_printf("p sur age : %p\n", p_age));
	printf("nb1 : %d\n", printf("p sur age : %p\n", p_age));
	ft_printf("age en hexa - min : %x\n", age);
	ft_printf("age en hexa - max : %X\n", age);
	ft_printf("afficher pourcent : %%\n");
	ft_printf("print unsigned : %u\n", 1275984365999);*/
}
