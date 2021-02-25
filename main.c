/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:26:26 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 19:25:37 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int main(void)
{


	printf("print pf: %d\n", printf("|%-5%|\n"));
	printf("print ft: %d\n", ft_printf("|%-5%|\n"));
//	printf("%s\n", NULL);

	return (0);
}
