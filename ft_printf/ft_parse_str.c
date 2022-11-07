/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:20:34 by franmart          #+#    #+#             */
/*   Updated: 2022/11/07 18:16:48 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_str(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_len(str);
	ft_putstr(str);
	return (len);
}
