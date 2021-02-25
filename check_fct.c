/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:50:43 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 16:02:53 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int checl_format(s_varg *ftpf, int *i)
{
	s_flags flags;

	(*i)++;
	if (ftpf->str[*i] == '-' && ftpf->str[(*i) + 1] == '0')
		return (-1);
	else if (ftpf->str[*i] == '0' && ftpf->str[(*i) + 1] == '0')
		return (-1);
	init_s_flags(&flags);
	if 
}

int	check_fct(s_varg *ftpf)
{
	int i;
	
	i = 0;
	while (ftpf->str[i])
	{
		if (ftpf->str[i] == '%')
		{
			if (check_format(ftpf, &i) == -1)
				return (-1);
		}
		i++;
	}
	return (0);
}
