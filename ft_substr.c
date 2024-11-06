/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:00:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 23:00:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char * substr;
    int i;

    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    
    i = 0;
    substr = (char *)ft_calloc(len + 1, sizeof(char));
    if(substr == NULL)
        return NULL;
    len = len + start;
    while(start <= len && s[start])
    {
        substr[i] = s[start];
        start++;
        i++;
    }
    return substr;
}
