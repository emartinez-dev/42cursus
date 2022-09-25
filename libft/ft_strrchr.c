/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:25:33 by franmart          #+#    #+#             */
/*   Updated: 2022/09/25 16:35:46 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	l_pos;

	i = 0;
	l_pos = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			l_pos = i;
		i++;
	}
	if (l_pos != -1)
		return ((char *)(s + l_pos));
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
	char	i = 'f';

    s = "hola mundo";
	m = ft_strrchr(s, i);
	o = strrchr(s, i);
    printf("La mia: %s\nLa buena: %s\n", m, o);
	if (m == o)
		printf("OK!!");
	else
		printf("ERROR!!!");
	return (0);
}
*/
