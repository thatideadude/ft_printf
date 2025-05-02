#include "../ft_printf.h"

int	ft_putcpad(char c, int align, int max)
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
