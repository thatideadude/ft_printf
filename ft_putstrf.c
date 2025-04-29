#include <unistd.h>

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
