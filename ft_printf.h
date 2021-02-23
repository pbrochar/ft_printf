#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

typedef struct 	t_varg
{
	const char	*str;
	int			pos;
	va_list		*lst;
	size_t		nb_print;
}				s_varg;

typedef struct	t_flags
{
	int		is_zero;
	int		is_dash;
	int		nb_zd;
	int		nb_space;
	int		precision;
	int		len;
	int		eq_type;
	char	type;

}				s_flags;

void	ft_puthex_min(s_varg *ftpf);
void	ft_puthex_maj(s_varg *ftpf);
void	ft_putaddr(s_varg *ftpf);
void	ft_putid(s_varg *ftpf);
void	ft_putstring(s_varg *ftpf);
void	ft_putcharac(s_varg *ftpf);
void	ft_putpct(s_varg *ftpf);
void	ft_putunsigned(s_varg *ftpf);

void	init_s_varg(s_varg *ftpf, const char *format, va_list *parameters);
void	init_s_flags(s_flags *flags);
int		pf_istype(char c);
int		pf_isflag(char c);

int		ft_printf(const char *format, ...);
void	ft_putnbr_pf(int n, size_t *i);
void	ft_putchar_pf(char c, size_t *i);
void	ft_putstr_pf(char *s, size_t *i);
void	ft_put_param(s_varg *ftpf);
void	print_zero(s_varg *test);
int		nb_len_dec(int n);
int		nb_len_hex(int n);
#endif
