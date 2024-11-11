/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:25:09 by marvin            #+#    #+#             */
/*   Updated: 2024/11/10 22:55:38 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(long long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long long	nb;
	int			numlent;
	char		*str;

	numlent = numlen((long long)n);
	nb = (long long)n;
	str = (char *)ft_calloc(numlent + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	numlent--;
	while (nb > 9)
	{
		str[numlent] = (nb % 10) + '0';
		nb = nb / 10;
		numlent--;
	}
	str[numlent] = (nb % 10) + '0';
	return (str);
}
