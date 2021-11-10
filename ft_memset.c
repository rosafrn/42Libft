/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:02:45 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/04 17:57:27 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b1;

	b1 = (unsigned char *)b;
	while (len > 0)
	{
		*b1 = (unsigned char)c;
		len--;
		b1++;
	}
	return (b);
}

/*int main(void)
{
	char a[] = "Ola";
	char b[] = "Ola";
	printf("%s\n", memset(a, '2', 3));
	printf("%s\n", ft_memset(b, '2', 3));
}*/
