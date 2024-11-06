/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:07:53 by oel-bann          #+#    #+#             */
/*   Updated: 2024/11/01 03:09:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    int lents;

    i = 0;
    lents = (int) ft_strlen(s);
    if (c == '\0')
        return (char *)&s[lents];
    while(s[i])
    {
        if(s[i] == c)
            return (char *)&s[i];
        i++;
    }
    return NULL;
}