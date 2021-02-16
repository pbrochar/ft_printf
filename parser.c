/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:41:22 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/16 14:48:21 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef struct s_printf {
	int rang;
	union {
		void (*x)(size_t, int);
		void (*p)(void *);
		void (*c)(char, int);
		void (*s)(char *, int);
	}u;
} t_printf;

int	 ft_parser(char *str)
{
	int i;
	int j;
	char *type;

	type = "csx";
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == '%')
		{
			while (type[j])
			{
				if (type[j] == str[i + 1])
					return (j);
				j++;
			}
		}		
		i++;
	}
	return (-1);
}

int main(int ac, char **av)
{
	(void)ac;
	t_printf hex = {2, &ft_puthex};
	t_printf cha t= {0, &ft_putchar_fd};
	int ret;
	ret = ft_parser(av[1]);
	
	
	return (0);
}

