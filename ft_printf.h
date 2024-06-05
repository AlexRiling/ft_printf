/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:22:25 by ariling           #+#    #+#             */
/*   Updated: 2024/06/05 23:33:01 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
char	*ft_itoa(int n); // Declaration for ft_itoa from libft
char	*ft_itoa_unsigned(unsigned int n);
char	*ft_itoa_base(unsigned int value, const char *base);
char	*ft_itoa_ptr(unsigned long ptr);

int		handle_char(va_list args);
int		handle_string(va_list args);
int		handle_int(va_list args);
int		handle_unsigned(va_list args);
int		handle_hex(va_list args, char format);
int		handle_pointer(va_list args);
int		handle_percent(void);

#endif
