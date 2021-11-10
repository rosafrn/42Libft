/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:39:51 by rosferna          #+#    #+#             */
/*   Updated: 2021/10/31 14:54:33 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		c -= 32;
	return (c);
}

/*int main(void)
{
	char c = 'a';
	char b = 'a';
	printf("%c\n", toupper(c));
	printf("%c\n", ft_toupper(b));
}*/
