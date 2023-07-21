/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 17:03:17 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/19 19:31:58 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c, char *sep)
{
	int		i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int		count_words(char *str, char *sep)
{
	int		i;
	int		j;
	int		is_word;

	i = 0;
	j = 0;
	is_word = 0;
	while (str[i])
	{
		if (is_sep(str[i], sep))
			is_word = 0;
		else if (is_word == 0)
		{
			is_word = 1;
			j++;
		}
		i++;
	}
	return (j);
}

int		count_letters(char *str, char *sep, int pos)
{
	int		i;

	i = 0;
	while (str[pos])
	{
		if (!is_sep(str[pos], sep))
			i++;
		pos++;
	}
	return (i);
}

void	split_str(char **tab, char *str, char *sep)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	k = 0;
	while (str[++i])
	{
		if (!is_sep(str[i], sep))
		{
			if (k == 0)
				if (!(tab[j] = malloc(sizeof(char) *
					(count_letters(str, sep, i) + 1))))
					return ;
			tab[j][k] = str[i];
			tab[j][k + 1] = '\0';
			k++;
		}
		if ((is_sep(str[i], sep) && !is_sep(str[i + 1], sep) && k > 0)
			&& (k = 0) == 0)
			j++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	if (!(tab = malloc(sizeof(char*) * (count_words(str, charset) + 1))))
		return (NULL);
	split_str(tab, str, charset);
	tab[count_words(str, charset)] = NULL;
	return (tab);
}
