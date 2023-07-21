/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 12:24:58 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/22 17:10:20 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int ac, char **av)
{
	int		nbr1;
	int		nbr2;

	nbr1 = 0;
	nbr2 = 0;
	if (ac != 4)
		return (0);
	nbr1 = ft_atoi(av[1]);
	nbr2 = ft_atoi(av[3]);
	ft_do_op(nbr1, av, nbr2);
	ft_putchar('\n');
	return (0);
}
