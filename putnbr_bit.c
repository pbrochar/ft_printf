#include "libft.h"
void	ft_putnbr(int nb);
static void ft_printdec(int v)
{
	if (v >= 0 && v < 10)
		ft_putchar_fd('0' + v, 1);
}

void	ft_putnbr(int nb)
{
	int i;

	i = (sizeof(nb) << 3) - 4;
	while (((nb >> i) & 10) == 0)
		i -= 4;
	while (i >= 0)
	{
		ft_printdec((nb >> i) & 10);
		i -= 4;
	}
}
int main(void)
{
	ft_putnbr(149);
}
