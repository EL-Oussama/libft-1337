/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:20:42 by oel-bann          #+#    #+#             */
/*   Updated: 2024/10/26 00:26:41 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *tab;
    size_t i;

    tab = (unsigned char *) b;
    i = 0;
    while(i < len)
    {
        tab[i] = (unsigned char) c;
        i++;
    }
    return (void *) tab;
}
