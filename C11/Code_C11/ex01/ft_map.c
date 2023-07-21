/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:33:36 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/23 11:49:02 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*result;

	if (!(result = malloc(sizeof(int) * length)))
		return (0);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
