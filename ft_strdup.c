/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 07:45:03 by oel-bann          #+#    #+#             */
/*   Updated: 2024/11/10 06:38:43 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dupli;
	int		i;

	i = 0;
	if (s1[i] == '\0')
	{
		dupli = (char *)malloc(1);
		dupli[0] = '\0';
		return (dupli);
	}
	dupli = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (dupli == NULL)
		return (NULL);
	while (s1[i])
	{
		dupli[i] = s1[i];
		i++;
	}
	return (dupli);
}
