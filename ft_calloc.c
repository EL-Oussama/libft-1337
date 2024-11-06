/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:23:55 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 00:23:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *mem;

    mem = (unsigned char*) malloc(count * size);
    if (mem == NULL)
        return NULL;
    ft_bzero(mem,count * size);
    return  (void *)(mem);
}