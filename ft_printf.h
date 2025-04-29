#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_getfunc(char c, va_list args);
int ft_putstrf(char *str);
int	ft_putcharf(char c);
int	ft_putnbrf(int nb);
int	ft_putnbruf(unsigned int nb);
int ft_puthexf(unsigned int nb, char *base);
int ft_putptrf(unsigned long nb, char *base, char first);

#endif
