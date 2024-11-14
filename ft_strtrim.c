/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 00:41:06 by marvin            #+#    #+#             */
/*   Updated: 2024/11/11 18:04:27 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strver(char const s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	char		*str;
	const char	*start;
	const char	*end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = s1 + (ft_strlen(s1) - 1);
	start = s1;
	while (*start && strver(*start, set))
		start++;
	while (end > start && strver(*end, set))
		end--;
	str = (char *)ft_calloc(ft_strlen(start) - \
		ft_strlen(end + 1) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = *start++;
	return (str);
}

// int	main(void)
// {
// 	printf("%s",ft_strtrim("lorem ipsum dolor sit amet","te"));
// }