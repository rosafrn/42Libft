/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:39:55 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/19 15:49:31 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	max;

	if (!s)
		return (NULL);
	max = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (max > len)
		str = (char *)malloc(len + 1 * sizeof(char));
	else
		str = (char *)malloc(max + 1 * sizeof(char));
	if (!str)
		return (NULL);
	if (max <= len)
		ft_strlcpy(str, (s + start), max + 1);
	else if (max > len)
		ft_strlcpy(str, (s + start), len + 1);
	return (str);
}

/*int main(void)
{
	char *c ="rosa fernandes";
	printf("%s\n", ft_substr(c, 100, 1));
}*/
