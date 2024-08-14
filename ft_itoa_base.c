/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:22:40 by ariling           #+#    #+#             */
/*   Updated: 2024/06/06 00:08:00 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ft_printf.h

char	*ft_itoa_base(unsigned int value, const char *base)
{
	char			*str;
	unsigned int	base_len;
	unsigned int	tmp;
	int				len;

	base_len = ft_strlen(base);
	tmp = value;
	len = 0;
	if (value == 0)
		len = 1;
	else
	{
		while (tmp != 0)
		{
			tmp /= base_len;
			len++;
		}
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (value == 0)
		str[0] = base[0];
	else
	{
		while (len--)
		{
			str[len] = base[value % base_len];
			value /= base_len;
		}
	}
	return (str);
}
