/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:51:46 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/11 18:36:34 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temporary;

	temporary = *lst;
	while (temporary)
	{
		ft_lstdelone(temporary, del);
		temporary = temporary->next;
		*lst = temporary;
	}
	lst = NULL;
}
