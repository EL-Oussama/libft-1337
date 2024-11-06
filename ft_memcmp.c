/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:38:03 by oel-bann          #+#    #+#             */
/*   Updated: 2024/11/01 03:04:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
	size_t i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while(str1[i] && str2[i] && i < n)
	{
		if(str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return 0;
}
int main()
{
	char *str1 = "oussama";
	char *str2 = "oussamr";
	int i = '\r';
	printf("%d",i);
	printf ("%d\n",ft_memcmp(str1,str2,7));
	printf ("%d",ft_memcmp(str1,str2,7));
}