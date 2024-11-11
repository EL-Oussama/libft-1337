/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:58:10 by marvin            #+#    #+#             */
/*   Updated: 2024/11/10 22:35:08 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	int lenstr, (i), (y);
	if (!s1 || !s2)
		return (NULL);
	lenstr = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)ft_calloc(lenstr + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
		str[i++] = s2[y++];
	return (str);
}
