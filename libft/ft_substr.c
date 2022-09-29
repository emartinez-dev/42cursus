/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:59:52 by franmart          #+#    #+#             */
/*   Updated: 2022/09/29 20:09:49 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	str_len;

	str_len = ft_strlen(s);
	i = 0;
	if (start > str_len)
		return (ft_strdup(""));
	else if (len < str_len)
		str = malloc(str_len + 1);
	else if (len > str_len)
		str = malloc(len + 1);
	else
		str = malloc((len - start) + 1);
	if (!str)
		return (0);
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
