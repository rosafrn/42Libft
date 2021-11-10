/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:49:49 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/10 16:15:06 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	count(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			return (w);
		while (s[i] != c && s[i])
			i++;
		w++;
	}
	return (w);
}	


char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		start;

	if (!s)
		return (NULL);
	str = (char **)malloc(count(s, c) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		str[j] = ft_substr(s, start, i - start);
		j++;
	}
	str[j] = NULL;
	return (str);
}

/*int main ()
{
	const char *s = "rosa ..... maria . ze";
	char c = '.';
	ft_split(s, c);
	printf("%p\n", &s[0]);
}*/
