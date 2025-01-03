/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:52:49 by marvin            #+#    #+#             */
/*   Updated: 2024/11/10 22:55:54 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	total;

	i = 0;
	sign = 1;
	total = 0;
	while (((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ') && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		total = (total * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(total * sign));
}
