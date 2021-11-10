/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:16:28 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/08 22:07:48 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)ft_calloc(1, (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}

/*int main (void)
{
	char *s1 = ft_strdup((char*)"coucou");
	char *s2 = strdup((char *)"coucou");
	printf("%d\n", strcmp(s1, "coucou"));
	printf("%d\n", strcmp(s2, "coucou"));
}*/
