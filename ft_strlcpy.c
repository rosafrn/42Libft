/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:29:41 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/08 22:30:49 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	while (src[z])
		z++;
	if (dstsize > 0)
	{
		while (src[i] && (i + 1) < dstsize)
		{	
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (z);
}

/*int main(void)
{
	char a[20] = "rosa";
	char b[20] = "fernandes";
	char c[20] = "rosa";
	char d[20] = "fernandes";
	printf("%lu\n", strlcpy(a, b, 2));
	printf("%s\n", a);
	printf("%lu\n", ft_strlcpy(c, d, 2));
	printf("%s\n", c);
}*/
