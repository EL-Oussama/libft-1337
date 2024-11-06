/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:51:07 by oel-bann          #+#    #+#             */
/*   Updated: 2024/11/01 03:14:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (needle[i] == '\0')
        return (char *)haystack;
    while(haystack[i] && i < len)
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            while(needle[j])
            {
                if (needle[j] != haystack[i + j])
                    return NULL;
                j++;
            }
            return (char *)(haystack + i); 
        }
        i++;
    }
    return NULL;
}
