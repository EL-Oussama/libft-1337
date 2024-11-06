/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:28:53 by oel-bann          #+#    #+#             */
/*   Updated: 2024/11/01 03:16:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t lents;

    lents = ft_strlen(s);
    if (c == '\0')
        return (char *) &s[lents];
    while (lents > 0)
    {
        if(s[lents] == c)
            return (char *) &s[lents];
        lents--;
    }
    return NULL;
}