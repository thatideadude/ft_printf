#include "ft_printf.h"

int	ft_getfunc(char c, va_list args)
{
	if (c == 'c')
		return (ft_putcharf(va_arg(args, int)));
	if (c == 's')
		return (ft_putstrf(va_arg(args, char *)));
	if ( c == 'd' || c == 'i')
		return (ft_putnbrf(va_arg(args, int)));
	if ( c == 'u')
		return (ft_putnbruf(va_arg(args, unsigned int)));
	if ( c == 'x')
		return (ft_puthexf(va_arg(args, unsigned long), "0123456789abcdef"));
	if ( c == 'X')
		return (ft_puthexf(va_arg(args, unsigned long), "0123456789ABCDEF"));
	if ( c == 'p')
	{
		return (ft_putptrf(va_arg(args, unsigned long), "0123456789abcdef", 1));
	}
	return (0);
}
