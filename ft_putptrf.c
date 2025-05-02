#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int	ft_putptrf(unsigned long nb, char *base, char first)
{
	int	 count;
	
	count = 0;
	if (first)
		count += write(1, "0x", 2);
	first = 0;
	if (nb > 15)
		count += ft_putptrf(nb/16, base, first);
	return (count + ft_putcharf(base[nb % 16]));
}
