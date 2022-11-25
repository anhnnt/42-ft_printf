#include <stdio.h>
#include "./includes/ft_printf.h"

int	main()
{
	char *string;
	string = "LOOOOOOOOOOO";
	int ft_count = ft_printf("FT_Printing: %c, %u, %s, %p, %%, %x, %X\n", 'a', -234, "Hello", (void *)&string, 522278, 522278);
	int count = printf("OR_Printing: %c, %u, %s, %p, %%, %x, %X\n", 'a', -234, "Hello", (void *)&string, 522278, 522278);
	printf("Printf: %d\n", count);
	ft_printf("FT_Printf: %d\n", ft_count);
	return (0);
}