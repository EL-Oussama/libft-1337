/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 01:43:20 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 01:43:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *dupli;
    int i;

    i = 0;
    if (s1[i] == '\0')
    {
        dupli = (char *) malloc(1);
        dupli[0] = '\0';
        return dupli;
    }
    dupli = (char *) malloc(ft_strlen(s1));
    if (dupli == NULL)
        return NULL;
    while(s1[i])
    {
        dupli[i] = s1[i];
        i++;
    }
    return (dupli);
}