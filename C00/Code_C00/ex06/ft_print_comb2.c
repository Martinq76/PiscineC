/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 10:09:24 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/04 10:18:43 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first;
		while (++second <= 99)
		{
			ft_putchar(first / 10 + 48);
			ft_putchar(first % 10 + 48);
			ft_putchar(' ');
			ft_putchar(second / 10 + 48);
			ft_putchar(second % 10 + 48);
			if (first != 98 || second != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		first++;
	}
}
