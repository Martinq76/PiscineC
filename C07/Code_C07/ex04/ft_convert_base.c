/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 10:29:45 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/18 14:05:20 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_c_to_int(char c, char *base);
int		ft_isspace(char c);
int		check_base(char *base);

char	*ft_get_str(unsigned int value, char *base, int i, int negative)
{
	char	*res;

	res = (char*)malloc(sizeof(char) * (i + negative + 1));
	--i;
	res[i + negative] = '\0';
	if (negative != 1)
		--i;
	while (i >= 0)
	{
		res[i] = base[value % ft_strlen(base)];
		value = value / ft_strlen(base);
		--i;
	}
	if (negative == 1)
		res[0] = '-';
	return (res);
}

char	*ft_itoa_base(int nbr, char *base_to)
{
	int				i;
	char			*res;
	int				negative;
	unsigned int	value;

	i = 1;
	negative = 0;
	value = nbr;
	if (nbr < 0)
	{
		negative = 1;
		value = -nbr;
	}
	if (nbr == 0)
		i++;
	while (nbr)
	{
		nbr /= ft_strlen(base_to);
		++i;
	}
	res = ft_get_str(value, base_to, i, negative);
	return (res);
}

int		ft_atoi_base(char *str, char *base)
{
	unsigned int	res;
	int				i;
	int				negative;
	int				tmp;

	i = 0;
	while ((ft_isspace(str[i])) == 1)
		++i;
	negative = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = -negative;
		++i;
	}
	res = 0;
	while (str[i])
	{
		if ((tmp = ft_c_to_int(str[i], base)) == -1)
			return (res * negative);
		res = res * ft_strlen(base) + tmp;
		++i;
	}
	return (res * negative);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result;
	char	*convert;

	if (check_base(base_from) != 0 || check_base(base_to) != 0)
		return (NULL);
	result = ft_atoi_base(nbr, base_from);
	convert = ft_itoa_base(result, base_to);
	return (convert);
}
