#include "../ft_printf.h"

int	ft_strlen(char *str)
{
	char *start;

	start = str;
	while (*str)
		str++;
	return (str - start);
}

int ft_putstrn(char *str, int min, int max, int align)
{
	int	i;
	int j;

	if (ft_strlen(str) > min && ft_strlen(str) < max)
		return (ft_putstrf(str));
	i = 0;
	if (align)
	{
		while (i < max && str[i])
			i += ft_putcharf(str[i]);
		while (i < min)
			i += ft_putcharf(' ');
	}
	else
	j = 0;
	{
		while (i + ft_strlen(str) < min)
			i += ft_putcharf(' ');
		while (i < min)
			i += ft_putcharf(str[j++]);
	} 
	return (i);
}
