/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:12:06 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/19 15:49:07 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (*s1 && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end - 1]))
		end--;
	if (end < start + 1)
		return (ft_strdup(""));
	size = end - start + 1;
	str = (char *)malloc(size);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], size);
	return (str);
}

/*int main()
{
    char *s1 = "     iji ijij ";
    char *set = "ij ";
    printf("%s\n", ft_strtrim(s1, set));
}*/
