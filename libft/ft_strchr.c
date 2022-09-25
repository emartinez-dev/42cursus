/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:15:12 by franmart          #+#    #+#             */
/*   Updated: 2022/09/25 21:31:12 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char	*s;
    char    *m;
    char    *o;
	char	i = '\0';

    s = "esta string tiene \0 muchos \0ceros \0";
	m = ft_strchr(s, i);
	o = strchr(s, i);
    printf("La mia: %s\nLa buena: %s\n", m, o);
	if (m == o)
		printf("OK!!");
	else
		printf("ERROR!!!");
	return (0);
}
*/
