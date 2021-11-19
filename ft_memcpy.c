/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:54:20 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/19 15:46:29 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	if (!dst && !src)
		return (NULL);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (n > 0)
	{
		*dst1 = *src1;
		dst1++;
		src1++;
		n--;
	}
	return (dst);
}

/*int main (void)
{
	char *c = NULL;
	char *cc = NULL;
	char *s = NULL;
	char *ss = NULL;

	memcpy(c, cc, 3);
	ft_memcpy(s, ss, 3);
	printf("%s\n", c);
	printf("%s\n", s);
}*/
