#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	i;
	int j;
	int	testing;

	testing = '1';
	i = ft_isdigit(testing);
	j = isdigit(testing);
	printf("La mia: %d\nLa buena: %d\n", i, j);
	if (i == j)
		printf("OK!!");
	else
		printf("ERROR!!!");
	return (0);
}
*/