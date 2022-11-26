#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(long int n);
int	ft_putunbr(unsigned int n);
int	ft_putptr(unsigned long n);
int	ft_puthexupper(unsigned long n);
int	ft_puthexlower(unsigned long n)

#endif