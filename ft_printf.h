#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

typedef struct 	t_varg
{
	const char	*str;
	int		v_pos;
	va_list	*lst;
	size_t	len;
}				s_varg;

void	ft_puthex_min(s_varg *ftpf);
void	ft_puthex_maj(s_varg *ftpf);
void	ft_putaddr(s_varg *ftpf);
void	ft_putid(s_varg *ftpf);
void	ft_putstring(s_varg *ftpf);
void	ft_putcharac(s_varg *ftpf);
void	ft_putpct(s_varg *ftpf);
void	ft_putunsigned(s_varg *ftpf);
int		ft_parser(char c);
int		ft_printf(const char *format, ...);
void	ft_putnbr_pf(int n, size_t *i);
void	ft_putchar_pf(char c, size_t *i);
void	ft_putstr_pf(char *s, size_t *i);
#endif
