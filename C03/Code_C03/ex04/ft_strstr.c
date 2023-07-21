/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 09:55:36 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/08 15:16:25 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	to_find_size;
	int	i;
	int	j;

	to_find_size = 0;
	i = 0;
	j = 0;
	while (to_find[to_find_size])
		to_find_size++;
	if (to_find_size == 0)
		return (str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == to_find_size - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
