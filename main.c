/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:03:20 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/21 16:24:11 by pbrochar         ###   ########.fr       */
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
	ft_printf("coucou\n");
	ft_printf("mon age : %d ans\n", age);
	ft_printf("addresse p sur age : %p\n", p_age);
	ft_printf("age en hexa - min : %x\n", age);
	ft_printf("age en hexa - max : %X\n", age);
	ft_printf("afficher pourcent : %%\n");
}
