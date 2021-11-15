/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:43:16 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/15 14:38:09 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	z;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] && len > i)
	{
		z = 0;
		while (haystack[i + z] == needle[z] && (len > z + i))
		{
			if (needle[z + 1] == '\0')
				return ((char *)haystack + i);
			z++;
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char *haystack = "rosa fernandes";
	char *needle = "9";
	printf("%p\n", strnstr(haystack, needle, 12));
	printf("%p\n", ft_strnstr(haystack, needle, 12));
}*/
