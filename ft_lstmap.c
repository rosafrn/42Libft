/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:42:59 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/11 21:11:30 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newhead;
	t_list	*newnode;
	
	if(!lst)
		return (NULL);
	
	ft_lstiteri(lst, f);

	newhead = NULL;
	while (lst)
	{
		lst = lst->next;
		newnode = ft_lstiteri(
		ft_lstadd_back(&newhead, f(lst));	
		/*if (newlist->content == NULL)
		{
			ft_lstdelone(newlist, del);
			return (NULL);
		}*/
	}
	return (newlist);
}
