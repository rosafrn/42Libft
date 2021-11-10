/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:30:37 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/01 19:11:49 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* primeiro copiar s1 para str e depois concatenar s2 a str*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)ft_calloc(1, size);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, (ft_strlen(s1) + 1));
	ft_strlcat(str, s2, size);
	return (str);
}

/*int main()
{
	char *c = "rosaaa";
	char *cc = "fernandes";
	printf("%s\n", ft_strjoin(c, cc));
}*/
