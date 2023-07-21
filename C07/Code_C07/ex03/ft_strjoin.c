/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 17:30:04 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/18 14:10:20 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_cat_and_join(int size, char **strs, char *sep, char *str)
{
	int		i;
	int		j;
	int		k;

	j = -1;
	k = 0;
	while (++j < size)
	{
		i = -1;
		while (strs[j][++i])
			str[k++] = strs[j][i];
		if (j < size - 1)
		{
			i = -1;
			while (sep[++i])
				str[k++] = sep[i];
		}
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]) + ft_strlen(sep) + 1;
		i++;
	}
	if (!(str = malloc(sizeof(char) * len)))
		return (NULL);
	if (size == 0)
		return (str);
	str = ft_cat_and_join(size, strs, sep, str);
	return (str);
}
