/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:05:16 by oel-bann          #+#    #+#             */
/*   Updated: 2024/10/26 23:20:56 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy( char *dst, const char *src, size_t dstsize)
{
    int lensrc;
    size_t i;

    lensrc = 0;
    i = 0;
    while ((src[lensrc]))
        lensrc++;
    if (dstsize == 0)
		return (lensrc);
    if(src[i] == '\0')
    {
        dst[i] = '\0';
        return 0;
    }
    dstsize--;
    while(src[i] && i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (lensrc);
}

int main()
{
    char *d = "\0";
    printf ("%lu", ft_strlcpy("hello","helo",0));

}
