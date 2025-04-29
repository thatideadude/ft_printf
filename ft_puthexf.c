#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int	ft_puthexf(unsigned int nb, char *base)
{
	int count;

	count = 0;
	if (nb > 15)
		count += ft_puthexf(nb / 16, base);
	return (count + ft_putcharf(base[nb % 16]));
}
