/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bann <oel-bann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 04:56:35 by oel-bann          #+#    #+#             */
/*   Updated: 2024/11/09 07:20:04 by oel-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freelst(void *content)
{
	free(content);
}

void	*change(void *anything)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strdup(anything);
	while (str[i])
	{
		str[i] = 'a';
		i++;
	}
	return ((void *)str);
}

/*static t_list *ft_lst(t_list *lst, void *(*f)(void *))
{
	t_list	*newlst;
	t_list	*oldlst;
	t_list	*ilyas;

	//t_list *newlst;
	if (!lst || !f)
		return (NULL);
	// newlst = (char *)malloc(sizeof(t_list));
	// newlst->content = ft_memcpy(newlst->content,lst->content,sizeof(lst->content));
	// f(newlst->content);
	return (ft_lstnew(f(lst->content)));
}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	oldlst = lst;
	newlst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		ilyas = ft_lstnew(f(lst->content));
		printf("-------%s-----\n", ilyas->content);
		if (!ilyas)
		{
			ft_lstclear(&oldlst, del);
			return (newlst);
		}
		ft_lstadd_front(&newlst, ilyas);
		lst = lst->next;
	}
	return (newlst);
}

int	main(void)
{
	t_list *node;
	node = NULL;
	ft_lstadd_front(&node, ft_lstnew(ft_strdup("iiiii")));
	ft_lstadd_front(&node, ft_lstnew(ft_strdup("iiii")));
	ft_lstadd_front(&node, ft_lstnew(ft_strdup("iii")));

	// t_list *ls = ft_lstnew(change(node->content));
	// printf("%s@@@@@@@@\n",ls->content);
	t_list *p = ft_lstmap(node, change, freelst);
	printf("2222222%d2222222\n", ft_lstsize(p));
	while (p)
	{
		printf("%s\n", p->content);
		p = p->next;
		printf("1\n");
	}
	printf("---------------------\n");
	/*while(node)
	{
		printf("%s\n",node ->content);
		node = node ->next;
	}*/
	// t_list* p = (t_list *)0x7fa62b405800;
	// printf("%s",p->content);
	// system("leaks a.out");
}