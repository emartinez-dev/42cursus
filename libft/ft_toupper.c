#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c-=32;
	return (c);
}

/* #include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int		i;
	int		j;
	int		testing;

	testing = 'z';
	i = ft_toupper(testing);
	j = toupper(testing);
	printf("La mia: %c\nLa buena: %c\n", i, j);
	if (i == j)
		printf("OK!!");
	else
		printf("ERROR!!!");
	return (0);
} */