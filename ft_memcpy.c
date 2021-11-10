/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:54:20 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/04 17:58:15 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;

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
	char c[20] = "\0";
	char cc[20] = "fernandes";
	char s[20] = "\0";
	char ss[20] = "fernandes";

	memcpy(c, cc, 6);
	ft_memcpy(s, ss, 6);
	printf("%s\n", c);
	printf("%s\n", s);
}*/
