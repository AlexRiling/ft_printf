/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:22:40 by ariling           #+#    #+#             */
/*   Updated: 2024/06/05 23:26:12 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_itoa_base(unsigned int value, const char *base)
{
	char			*str;
	unsigned int	base_len;
	unsigned int	tmp;
	int				len;

	base_len = strlen(base);
	tmp = value;
	len = 1;
	while (tmp != 0)
	{
		tmp /= base_len;
		len++;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = base[value % base_len];
		value /= base_len;
	}
	return (str);
}
