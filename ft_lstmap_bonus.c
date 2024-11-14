/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 04:56:35 by oel-bann          #+#    #+#             */
/*   Updated: 2024/11/11 18:39:50 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*oldlst;
	t_list	*ilyas;
	void	*countent;

	oldlst = lst;
	newlst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		countent = f(lst->content);
		ilyas = ft_lstnew(countent);
		if (!ilyas)
		{
			del(countent);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, ilyas);
		lst = lst->next;
	}
	return (newlst);
}
