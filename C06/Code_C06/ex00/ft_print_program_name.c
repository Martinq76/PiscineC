/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:37:33 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/12 19:40:09 by mqueguin         ###   ########.fr       */
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

	i = 0;
	while (av[0][i] && ac)
	{
		ft_putchar(av[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
