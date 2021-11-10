/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:02:06 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/08 18:10:26 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}

/*int main(void)
{
	const char *s = "rosa fernandes";
	printf("%p\n", strchr(s, 'z')); 
	printf("%p\n", ft_strchr(s, 'z'));
}*/
