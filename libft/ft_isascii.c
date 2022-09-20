#include "libft.h"

int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	return (0);
}

/* 
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	i;
	int j;
	int	testing;

	testing = 0;
	i = ft_isascii(testing);
	j = isascii(testing);
	printf("La mia: %d\nLa buena: %d\n", i, j);
	if (i == j)
		printf("OK!!");
	else
		printf("ERROR!!!");
	return (0);
} */