/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psousa <psousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:32:12 by psousa            #+#    #+#             */
/*   Updated: 2022/11/15 18:13:17 by psousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[n] != 0)
		n++;
	while (src[i] != 0 && i < size - 1)
	{
		dest[n + i] = src[i];
		i++;
	}
	return (i);
}
