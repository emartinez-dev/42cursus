/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:34:53 by franmart          #+#    #+#             */
/*   Updated: 2022/10/13 20:16:42 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_int(int i)
{
	int		len;
	char	*str;

	if (!i)
		return (0);
	str = ft_itoa(i);
	len = ft_strlen(str);
	free(str);
	ft_putnbr_fd(i, 1);
	return(len);
}
