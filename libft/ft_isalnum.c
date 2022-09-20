#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
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

	testing = '(';
	i = ft_isalnum(testing);
	j = isalnum(testing);
	printf("La mia: %d\nLa buena: %d\n", i, j);
	if (i == j)
		printf("OK!!");
	else
		printf("ERROR!!!");
	return (0);
}
*/