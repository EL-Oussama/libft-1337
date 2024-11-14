/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 07:45:03 by oel-bann          #+#    #+#             */
/*   Updated: 2024/11/11 18:02:32 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dupli;
	int		i;

	i = 0;
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

// int main()
// {
// 	printf("%s\n",ft_strdup(""));
// 	printf("%s\n",strdup(""));
// }