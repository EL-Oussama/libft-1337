/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:44:22 by oel-bann          #+#    #+#             */
/*   Updated: 2024/10/27 17:21:20 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *src;
	unsigned char sh;
	size_t i;

	src = (unsigned char *)s;
	sh = (unsigned char)c;
	i = 0;
	while (src[i] && i < n)
	{
		if (src[i] == sh)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}