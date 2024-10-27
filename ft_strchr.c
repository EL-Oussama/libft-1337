/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:07:53 by oel-bann          #+#    #+#             */
/*   Updated: 2024/10/26 00:37:15 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
    int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strchr(const char *s, int c)
{
    int i;
    int lents;

    i = 0;
    lents = ft_strlen(s);
    if (c == '\0')
        (char *) s[lents];
    while(s[i])
    {
        if(s[i] == c)
            return (char *)&s[i];
        i++;
    }
    return NULL;
}
