/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 16:33:00 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/18 12:43:13 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
			|| c == ' ')
		return (1);
	return (0);
}

int		check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]) == 1)
			return (1);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

int		ft_c_to_int(char c, char *base)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (base[len])
		len++;
	while (i < len)
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
