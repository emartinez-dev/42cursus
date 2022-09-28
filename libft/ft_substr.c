/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:59:52 by franmart          #+#    #+#             */
/*   Updated: 2022/09/28 15:51:45 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	int		m_size;

	i = 0;
	if (len > ft_strlen(s))
		m_size = ft_strlen(s) + 1;
	else
		m_size = len + 1;
	str = malloc(m_size);
	if (!str)
		return (0);
	ft_bzero(str, m_size);
	if (start > ft_strlen(s))
		return (str);
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
