/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:34:13 by ariling           #+#    #+#             */
/*   Updated: 2024/06/06 00:04:50 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_pointer(va_list args)
{
	unsigned long	ptr;
	char			*str;
	int				len;

	ptr = (unsigned long)va_arg(args, void *);
	if (ptr == 0)
		str = ft_strdup("(nil)");
	else
		str = ft_itoa_ptr(ptr);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
