/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:39:55 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/08 22:20:51 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	max;

	max = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	str = (char *)malloc(max + 1);
	if (!str)
		return (NULL);
	while (max-- > 0)
		ft_strlcpy(str, (s + start), len + 1);
	return (str);
}

/*int main(void)
{
	char *c ="rosa fernandes";
	printf("%s\n", ft_substr(c, 100, 1));
}*/
