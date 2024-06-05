#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"
#include <stdio.h>

int ft_printf(const char *format, ...);
char *ft_itoa(int n);
char *ft_itoa_unsigned(unsigned int n);
char *ft_itoa_base(unsigned int value, const char *base);
char *ft_itoa_ptr(unsigned long ptr);

#endif
