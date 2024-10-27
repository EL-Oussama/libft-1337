/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:51:07 by oel-bann          #+#    #+#             */
/*   Updated: 2024/10/27 00:03:37 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;

    i = 0;
    if (needle[i] == '\0')
        return (char *)haystack;
    while(haystack[i])
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            while(needle[j] && j < len)
            {
                if (needle[j] != haystack[i + j])
                    break;
                printf("needle --> %c\n",needle[j]);
                printf("haystack --> %c\n",haystack[i + j]);
                j++;
            }
            return (char *)(haystack + i); 
        }
        i++;
    }
    return NULL;
}

int main()
{
    char *c ="hello word this is oussama from space";
    printf("%s\n",ft_strnstr(c,"thisy",5));
    char *d ="hello word this is oussama\0 from space";
    printf("%s",strnstr(d,"oussama",5));
}