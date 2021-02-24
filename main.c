/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:26:26 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/24 20:22:49 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int main(void)
{
	int a;
	a = 0;
	ft_printf("|%30.*s|\n", 5, "coucou je suis paul");
	printf("|%30.*s|\n", 5, "coucou je suis paul");
	printf("|%30.*s|\n", 5, "coucou je suis paul");
	return (0);
}
