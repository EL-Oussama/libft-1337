/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:00:16 by marvin            #+#    #+#             */
/*   Updated: 2024/11/11 13:32:32 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strl(unsigned int start, size_t end, char const *s)
{
	int	i;

	i = 0;
	if (end > ft_strlen(s))
		end = ft_strlen(s);
	else
		end = end + start;
	while (start < end && s[i])
	{
		start++;
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	size_t	l;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || start > len)
		return (ft_strdup(""));
	i = 0;
	l = ft_strl(start, len, s);
	substr = (char *)malloc(l + 1);
	if (substr == NULL)
		return (NULL);
	len = len + start;
	while (start < len && s[start])
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
