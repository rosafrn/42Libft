/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:54:58 by rosferna          #+#    #+#             */
/*   Updated: 2021/10/31 15:02:18 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		c += 32;
	return (c);
}

/*int main (void)
{
	char c = '%';
	char b = '%';
	printf("%c\n", tolower(c));
	printf("%c\n", ft_tolower(b));
}*/
