/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:26:26 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 14:20:23 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int main(void)
{
	int outft;
	int outpf;

//	static char *s_hidden = "hi low\0don't print me lol\0";

	outft = ft_printf("|%3i|\n", 0);
	outpf = printf("|%3i|\n", 0);
	printf("ft : %d, pf : %d\n", outft, outpf);
//	ft_printf("%s\n", NULL);
//	printf("%s\n", NULL);

	return (0);
}
