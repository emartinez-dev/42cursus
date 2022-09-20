#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

/* #include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	i;
	int j;
	int	testing;

	testing = '~';
	i = ft_isprint(testing);
	j = isprint(testing);
	printf("La mia: %d\nLa buena: %d\n", i, j);
	if (i == j)
		printf("OK!!");
	else
		printf("ERROR!!!");
	return (0);
}
*/