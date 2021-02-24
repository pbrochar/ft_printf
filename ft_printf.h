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
	int			indicator;
}				s_varg;

typedef struct	t_flags
{
	int		nb_zero;
	int		nb_dash;
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
int		nb_len_addr(s_varg *ftpf);
int		nb_len_unsigned(unsigned int nb);
void	print_arg(s_varg *ftpf, s_flags *flags);
void	print_flags(s_varg *ftpf, s_flags *flags);

void	pf_print_zero(s_varg *ftpf, s_flags *flags);
void	pf_print_space(s_varg *ftpf, s_flags *flags);
void	pf_print_dash(s_varg *ftpf, s_flags *flags);
void	pf_print_precision(s_varg *ftpf, s_flags *flags);

int		ft_printf(const char *format, ...);
void	ft_putnbr_pf(int n, size_t *i, int indicator);
void	ft_putchar_pf(char c, size_t *i);
void	ft_putstr_pf(char *s, size_t *i);
void	ft_put_param(s_varg *ftpf);
void	print_zero(s_varg *test);
int		nb_len_dec(int n);
int		nb_len_hex(int n);
#endif
