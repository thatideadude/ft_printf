#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_findspecifier((char *)&str[++i], args);
			while (is_validf(str[i]))
				++i;
			++i;
		}
		else
			count += ft_putcharf(str[i++]);
	}
	va_end(args);
	return (count);
}
