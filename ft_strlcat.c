/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:05:34 by oel-bann          #+#    #+#             */
/*   Updated: 2024/11/09 07:45:25 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;
	int		i;
	size_t	y;
	int		n;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize <= lendst)
		return (lensrc + dstsize);
	n = (int)(dstsize - lendst - 1);
	y = lendst;
	while (src[i] && (i < n))
	{
		dst[y] = src[i];
		y++;
		i++;
	}
	dst[lendst] = '\0';
	return (lendst + lensrc);
}
