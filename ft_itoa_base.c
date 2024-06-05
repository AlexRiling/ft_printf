#include <stdlib.h>
#include <string.h>

char *ft_itoa_base(unsigned int value, const char *base)
{
    char *str;
    unsigned int base_len = strlen(base);
    unsigned int tmp = value;
    int len = 1;

    while (tmp /= base_len)
        len++;

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

