/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:55:36 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/08 18:23:58 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = s;
	while (*s)
		s++;
	while (*s != *temp || (*s == (char)c))
	{
		if (*s == (char) c)
			return ((char *)s);
		s--;
	}
	return (0);
}

/*int main(void)
{
	char *c = "rosa fernandes okoko";
	printf("%p\n", strrchr(c, 'r'));
	printf("%p\n", ft_strrchr(c, 'r'));
}*/
