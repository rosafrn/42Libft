/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:50:48 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/08 21:56:31 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[z] && i + z + 1 < dstsize)
	{
		dst[i + z] = src[z];
		z++;
	}
	if (i < dstsize)
		dst[i + z] = '\0';
	return (i + ft_strlen(src));
}

/*int main (void)
{
	char a[18] = "rosa";
	char b[20] = "AAAAAAAAAAA";
	char c[18] = "rosa";
	char d[20] = "AAAAAAAAAAA";
	printf("%lu\n", ft_strlcat(a, b, -1));
	printf("%s\n", a);
	printf("%lu\n", strlcat(c, d, -1));
	printf("%s\n", c);
}*/
