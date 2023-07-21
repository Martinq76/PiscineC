/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 14:52:17 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/23 11:46:51 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_do_op(int nbr1, char **av, int nbr2)
{
	if (ft_strcmp(av[2], "+") == 0)
		ft_putnbr(ft_addition(nbr1, nbr2));
	else if (ft_strcmp(av[2], "-") == 0)
		ft_putnbr(ft_soustraction(nbr1, nbr2));
	else if (ft_strcmp(av[2], "*") == 0)
		ft_putnbr(ft_multiplication(nbr1, nbr2));
	else if (ft_strcmp(av[2], "/") == 0)
	{
		if (nbr2 == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(ft_division(nbr1, nbr2));
	}
	else if (ft_strcmp(av[2], "%") == 0)
	{
		if (nbr2 == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(ft_modulo(nbr1, nbr2));
	}
	else
		ft_putnbr(0);
}
