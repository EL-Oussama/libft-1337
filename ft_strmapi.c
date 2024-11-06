/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:50:14 by marvin            #+#    #+#             */
/*   Updated: 2024/11/02 00:50:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    size_t lens;
    char *str;

    i = 0;
    lens = ft_strlen(s);
    str = (char *) ft_calloc(lens + 1, sizeof(char));
    if(!str)
        return (NULL);
    while(s[i])
    {
        str[i] = f(i,s[i]);
        i++;
    }
    return str;
}