/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 15:20:06 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/23 11:45:29 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_addition(int nbr1, int nbr2)
{
	return (nbr1 + nbr2);
}

int		ft_soustraction(int nbr1, int nbr2)
{
	return (nbr1 - nbr2);
}

int		ft_multiplication(int nbr1, int nbr2)
{
	return (nbr1 * nbr2);
}

int		ft_division(int nbr1, int nbr2)
{
	return (nbr1 / nbr2);
}

int		ft_modulo(int nbr1, int nbr2)
{
	return (nbr1 % nbr2);
}
