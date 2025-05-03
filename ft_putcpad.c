#include "ft_printf.h"

int	ft_parsec(char *str, int c)
{
	int	i;
	int	align;
	int	max;

	i = 0;
	align = 0;
	if (str[i] == 'c')
		return (ft_putcharf(c));
	if (str[i] == '-')
	{
		align = 1;
		++i;
	}
	max = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		max = max * 10 + (str[i] - '0');
		++i;
	}
	if (max == 0)
		max = 1;
	return (ft_putcpad(c, align, max));
}

int	ft_putcpad(int c, int align, int max)
{
	int	i;

	i = 0;
	if (align)
	{
		i += ft_putcharf(c);
		while (i < max)
			i += ft_putcharf(' ');
	}
	else
	{
		while (i < max - 1)
			i += ft_putcharf(' ');
		i += ft_putcharf(c);
	}
	return (i);
}

