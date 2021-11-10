/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:53:28 by rosferna          #+#    #+#             */
/*   Updated: 2021/10/22 12:37:33 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/* int main (void)
{
	char s[50] = "rosa";
	char c[50] = "rosa";
	bzero(c, 1);
	ft_bzero(s, 1);
	printf("%d\n", strcmp(s, c));
	//printf("%s\n", c);
}*/
