#include "ft_printf.h"

int	main(void)
{
	int	len;
	int	x;

	x = 42;
	len = ft_printf("Hello %corld%c\n", 'W', '!');
	printf("Printed characters: %d\n", len);
	len = ft_printf("This is a %s\n", "test string");
	printf("Printed characters: %d\n", len);
	len = ft_printf("String with NULL: %s\n", NULL);
	printf("Printed characters: %d\n", len);
	len = ft_printf("Decimal: %d\n", 42);
	printf("Printed characters: %d\n", len);
	len = ft_printf("Integer: %i\n", -42);
	printf("Printed characters: %d\n", len);
	len = ft_printf("Unsigned: %u\n", 42);
	printf("Printed characters: %d\n", len);
	len = ft_printf("Hex lowercase: %x\n", 255);
	printf("Printed characters: %d\n", len);
	len = ft_printf("Hex uppercase: %X\n", 255);
	printf("Printed characters: %d\n", len);
	len = ft_printf("Pointer: %p\n", &x);
	printf("Printed characters: %d\n", len);
	return (0);
}
