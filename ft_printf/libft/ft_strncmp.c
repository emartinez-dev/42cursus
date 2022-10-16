/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:02:13 by franmart          #+#    #+#             */
/*   Updated: 2022/09/26 22:04:33 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i])
		i++;
	if (i < n && s1[i] != s2[i] && (i <= ft_strlen(s1) && i <= ft_strlen(s2)))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
