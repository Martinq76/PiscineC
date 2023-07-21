/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 19:25:23 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/10 15:39:12 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ' || base[i] == '\f' ||
				base[i] == '\t' || base[i] == '\n'
				|| base[i] == '\r' || base[i] == '\v')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		get_int_from_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int	negative;
	int	result;
	int	tmp;

	i = 0;
	negative = 1;
	result = 0;
	if (check_base(base))
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
			(str[i++] == '-') ? negative = -negative : negative;
		while (str[i])
		{
			if ((tmp = get_int_from_base(str[i], base)) == -1)
				return (0);
			result = result * ft_strlen(base) + tmp;
			i++;
		}
	}
	return (result * negative);
}
