/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 11:04:23 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/17 17:39:32 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;
	int		*tab;

	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(int) * len);
	if (tab == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (len);
}
