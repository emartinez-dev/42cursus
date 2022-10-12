/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:30:50 by franmart          #+#    #+#             */
/*   Updated: 2022/10/12 10:09:59 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_check_arg(char c, va_list args)
{
	int	len;
	
	len = 0;
	if (c == 'c')
		len += ft_parse_char(va_arg(args, char));
	if (c == 's')
		len += ft_parse_str(va_arg(args, char *));
	if (c == 'p')
		len += ft_parse_args(va_arg(args, void *));
	if (c == 'd')
		len += ft_parse_float(va_arg(args, float));
	if (c == 'i')
		len += ft_parse_int(va_arg(args, int));
	if (c == 'u')
		len += ft_parse_u_int(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		len += ft_parse_hex(va_arg(args, int), c);
	if (c == '%' && len++)
		len += ft_parse_perc();
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len++;
			len += ft_check_arg(str[i + 1], args);
		}
		else
			write(1, &str[i], 1);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	int	i;
	
	i = ft_printf("%c", 'a');
	printf("%d", i);
	return (0);
}
