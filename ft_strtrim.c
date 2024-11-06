/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 00:41:06 by marvin            #+#    #+#             */
/*   Updated: 2024/11/01 00:41:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strver(char const s1, char const *set)
{
    int i;

    i = 0;
    while(set[i])
    {
        if (s1 == set[i])
            return (1);
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    char *start;
    char *end;
    char *str;

    i = 0;
    while (strver(s1[i],set))
        i++;
    start = (char *)&s1[i];
    i = (int)ft_strlen(s1) - 1;
    while (strver(s1[i],set))
        i--;
    end = (char *)&s1[i];
    str = (char *)ft_calloc(ft_strlen(start) - ft_strlen(end), sizeof(char));
    if(str == NULL)
        return NULL;
    i = 0;
    while(start + i <= end)
    {
        str[i] = start[i];
        i++;
    }
    return str;
}

int main()
{
    printf("%s",ft_strtrim("                My name is Simon                    "," "));
}