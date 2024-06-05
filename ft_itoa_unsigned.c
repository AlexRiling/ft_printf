#include <stdlib.h>

char	*ft_itoa_unsigned(unsigned int n)
{
	char			*str;
	int				len;
	unsigned int	tmp;

	len = 1;
	tmp = n;
	while (tmp /= 10)
		len++;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
