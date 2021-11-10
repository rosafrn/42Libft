/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:23:36 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/01 14:35:25 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = (char *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_memset(str, 0, size * count);
	return (str);
}

/*int main(void)
{
	printf("%s\n", (char *)calloc(5, 5));
	printf("%s\n", (char *)ft_calloc(5, 5));
}*/
