#include <unistd.h>
#include "ft_printf.h"

int	ft_strlen(char *str)
{
	char *start;

	start = str;
	while (*str)
		str++;
	return (str - start);
}

int	ft_putstrn(char *str, int align, int max, int precision, int dot)
{
	int	i;
	int	j;

	(void) dot;
	i = 0;
	if (align)
	{
		while (i < precision && str[i])
			i += ft_putcharf(str[i]);
		while(i < max)
			i += ft_putcharf(' ');
	}
	else
	{
		j = 0;
		while (i + precision < max || i + ft_strlen(str) < max)
			i += ft_putcharf(' ');
		while (j < precision && str[j])
			i += ft_putcharf(str[j++]);
	}
	return (i);
}
int	ft_parses(char *s1, char *s2)
{
	int	i;
	int align;
	int	max;
	int	precision;
	int dot;
	
	align = 0;
	i = 0;
	if (s1[i] == 's')
		return (ft_putstrf(s2));
	align = (str[i] == '-');
	i += align;
	max = 0;
	while (s1[i] >= '0' && s1[i] <= '9')
		max = max * 10 + (s1[i++] - '0');
	i += (s1[i] == '.');
	dot = (s1[i] == '.');
	precision = 0;
	while (s1[i] >= '0' && s1[i] <= '9')
		precision = precision * 10 + (s1[i++] - '0');
	if (precision < 0 && max <= ft_strlen(s2))
		return (ft_putstrf(s2));
	return (ft_putstrn(s2, align, max, precision, dot));
}

int	ft_putstrf(char *str)
{
	int count;

	count = 0;
	if (!str)
		return (ft_putstrf("(null)"));
	while (*str)
		count += write(1, str++, 1);
	return (count);
}
