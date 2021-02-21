#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

typedef struct 	t_varg
{
	const char	*str;
	int		v_pos;
	va_list	*lst;
	int 	upper;
}				s_varg;

void	ft_puthex_min(s_varg *ftpf);
void	ft_puthex_maj(s_varg *ftpf);
void	ft_putaddr(s_varg *ftpf);
void	ft_putid(s_varg *ftpf);
void	ft_putstr_pf(s_varg *ftpf);
void	ft_putchar_pf(s_varg *ftpf);
void	ft_putpct(s_varg *ftpf);
int		ft_parser(char c);
void	ft_printf(const char *format, ...);
#endif
