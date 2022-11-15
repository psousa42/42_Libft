/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psousa <psousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:15:22 by psousa            #+#    #+#             */
/*   Updated: 2022/11/15 14:09:05 by psousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word(char const *s, char c)
{
	int	tsla;
	int	fcbk;

	tsla = 0;
	fcbk = 0;
	while (*s)
	{
		if (*s != c && fcbk == 0)
		{
			fcbk = 1;
			tsla++;
		}
		else
		{	
			if (*s == c)
				fcbk = 0;
		s++;
		}
		return (tsla);
	}
}

static int	letter(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	j = -1;
	word = word(s, c);
	str = (char **)malloc((word + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, letter(s, c, i));
		if (!str)
			return (NULL);
		i += letter(s, c, i);
	}
	str[j] = 0;
	return (str);
}
