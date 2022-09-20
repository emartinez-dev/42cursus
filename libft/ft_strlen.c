#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <string.h>
#include <stdio.h>

/* int	main(void)
{
	int		i;
	int		j;
	char	*testing;

	testing = "hola caracola!";
	i = ft_strlen(testing);
	j = strlen(testing);
	printf("La mia: %d\nLa buena: %d\n", i, j);
	if (i == j)
		printf("OK!!");
	else
		printf("ERROR!!!");
	return (0);
} */