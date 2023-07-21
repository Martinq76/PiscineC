/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 16:53:33 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/06 17:09:10 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_hexa(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c >= 16)
		ft_putchar(hex[c / 16]);
	else
	{
		ft_putchar('0');
		ft_putchar(hex[c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			display_hexa(str[i]);
		}
		i++;
	}
}
