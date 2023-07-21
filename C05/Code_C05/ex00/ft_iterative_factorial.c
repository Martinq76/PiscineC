/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 15:48:03 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/11 16:55:40 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
