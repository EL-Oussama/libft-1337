/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:44:22 by oel-bann          #+#    #+#             */
/*   Updated: 2024/11/11 14:51:55 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	sh;

	src = (unsigned char *)s;
	sh = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == sh)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
