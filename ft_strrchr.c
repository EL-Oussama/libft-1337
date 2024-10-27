/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:28:53 by oel-bann          #+#    #+#             */
/*   Updated: 2024/10/26 00:46:19 by oel-bann         ###   ########.fr       */
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

char *ft_strrchr(const char *s, int c)
{
    int lents;

    lents = ft_strlen(s);
    if (c == '\0')
        return (char *) s[lents];
    while (lents > 0)
    {
        if(s[lents] == c)
            return (char *) s[lents];
        lents--;
    }
    return NULL;
}