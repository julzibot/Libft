/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:14:15 by jibot             #+#    #+#             */
/*   Updated: 2021/10/31 17:50:51 by jibot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*flist;
	t_list	**alst;

	(void) del;
	alst = NULL;
	if (!lst || ft_lstsize(lst) == 0)
		return (NULL);
	flist = ft_lstnew(lst->content);
	*alst = flist;
	f(flist->content);
	lst = lst->next;
	while (lst->next)
	{
		flist->next = ft_lstnew(lst->content);
		flist = flist->next;
		f(flist->content);
		lst = lst->next;
	}
	if (ft_lstsize(*alst) != 1)
	{
		flist->next = ft_lstnew(lst->content);
		f(flist->next->content);
	}
	return (*alst);
}
