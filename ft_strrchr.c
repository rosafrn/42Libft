/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:55:36 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/19 20:27:15 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;

	i = 0;
	while (s[i])
		i++;
	while (--i >= 0 || s[i] == c)
		if (s[i] == c)
			return ((char *)&s[i]);
	return (NULL);
}

/*int main(void)
{
	char *c = "rosa fernandes okoko";
	printf("strrchr: %s\n", strrchr(c, 'r'));
	printf("ft_strrchr: %s\n", ft_strrchr(c, 'r'));
}*/
