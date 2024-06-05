#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
char	*ft_itoa(int n);
char	*ft_itoa_unsigned(unsigned int n);
char	*ft_itoa_base(unsigned int value, const char *base);
char	*ft_itoa_ptr(unsigned long ptr);

#endif
