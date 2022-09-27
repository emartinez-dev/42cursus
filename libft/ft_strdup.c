/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:07:37 by franmart          #+#    #+#             */
/*   Updated: 2022/09/27 21:15:51 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < len + 1)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
