/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:35:59 by franmart          #+#    #+#             */
/*   Updated: 2022/10/16 12:18:26 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned int n, int fd, char upper)
{
	unsigned int	c;
	int				ascii;

	if (upper == 'x')
		ascii = 87;
	else
		ascii = 55;
	if (n / 16 > 0)
	{
		ft_putnbr_hex(n / 16, fd, upper);
	}
	if (n % 16 < 10)
		c = n % 16 + 48;
	if (n % 16 > 9 && n % 16 < 17)
		c = n % 16 + ascii;
	ft_putchar_fd(c, fd);
}

int	ft_hex_len(int hex)
{
	int		len;

	len = 0;
	while (hex / 16)
	{
		hex /= 16;
		len++;
	}
	return (len);
}

int	ft_parse_hex(int hex, char upper)
{
	ft_putnbr_hex(hex, 1, upper);
	return (ft_hex_len(hex));
}
