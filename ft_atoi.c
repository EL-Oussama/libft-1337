/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:52:49 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 07:50:35 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	max_checker(double total)
{
	if (total > 2147483647)
		return (2147483647);
	else
		return (-2147483648);
}

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	double total;

	i = 0;
	sign = 1;
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
	if (total > 2147483647 || total < -2147483648)
		return (max_checker(total * sign));
	return (int)(total * sign);
}