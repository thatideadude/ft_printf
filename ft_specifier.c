#include "ft_printf.h"

int is_validf(char c)
{
	char	*flags;
	int		i;

	flags = "-0 #-.123456789";
	i = 0;
	while (flags[i])
	{
		if (c == flags[i])
			return (1);
		++i;
	}
	return (0);
}

int ft_findspecifier(char *str, va_list args)
{
	int	i;

	i = 0;
	while (is_validf(str[i]))
		++i;
	if (str[i] == 'c')
		return (ft_parsec(str, va_arg(args, int)));
	if (str[i] == 's')
		return (3);
	if (str[i] == 'p')
		return (7);
	if (str[i] == 'd' || str[i] == 'i')
		return (15);
	if (str[i] == 'u')
		return (31);
	if (str[i] == 'x')
		return (63);
	if (str[i] == 'X')
		return (127);
	if (str[i] == '%')
		return (255);
	return (i * -1);
}

