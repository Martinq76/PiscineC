/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:54:07 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/13 10:01:24 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int	i;
	int j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			ft_putchar(av[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
