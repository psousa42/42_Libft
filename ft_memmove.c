/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psousa <psousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:34:32 by psousa            #+#    #+#             */
/*   Updated: 2022/11/15 17:47:55 by psousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strn(char *c)
{
	int	i;

	i = 0;
	while (c[i] != 0)
		i++;
	return (i);
}

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)str2;
	d = (char *)str1;
	i = 0;
	if (d > s)
	{	
		while (n > 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (str1);
}
