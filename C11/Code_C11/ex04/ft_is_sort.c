/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 11:08:55 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/23 11:51:10 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sort_is_sup(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_sort_is_low(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int		strcmp_int(int s1, int s2)
{
	if (s1 < s2)
		return (-1);
	if (s1 == s2)
		return (0);
	else
		return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_sort_is_sup(tab, length, f) || ft_sort_is_low(tab, length, f))
		return (1);
	return (0);
}
