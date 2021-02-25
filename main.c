/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:26:26 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 19:52:49 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int main(void)
{


	printf("print pf: %d ==> ", printf("|%.p|\n", NULL));
	printf("print ft: %d ==> ", ft_printf("|%5.p|\n", NULL));
//	printf("%s\n", NULL);

	return (0);
}
