/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:55:42 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/11 21:15:59 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*temporary;

	temporary = (t_list *)malloc(sizeof(t_list) * 1);
	if (!temporary)
		return (NULL);
	temporary->content = content;
	temporary->next = NULL;
	return (temporary);
}
