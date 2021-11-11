/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:20:35 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/11 17:48:44 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temporary;

	temporary = *lst;
	if (!temporary)
		*lst = new;
	else
	{
		temporary = ft_lstlast(temporary);
		temporary->next = new;
	}
}
