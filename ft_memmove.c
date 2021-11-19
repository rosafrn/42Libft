/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:22:49 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/19 17:15:09 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	if (!dst && !src)
		return (NULL);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst1 > src1)
	{
		while (len--)
			dst1[len] = src1[len];
		return (dst);
	}
	else
	{
		while (len-- > 0)
		{
			*dst1 = *src1;
			dst1++;
			src1++;
		}
		return (dst);
	}
}
/*int main(void)
{
	char a[19] = "rosafernandes";
	//char b[15] = "fosa";
	char c[19] = "rosafernandes";
	//char d[15] = "fosa";
	printf("%s\n", memmove(&a[2], &a[0], 4));
	printf("%s\n", ft_memmove(&c[2], &c[0], 4));
	printf("%d\n", strcmp(a, c));
}*/
