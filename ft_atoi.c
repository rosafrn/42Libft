/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:07:41 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/19 17:18:23 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	nbr;

	sign = 1;
	nbr = 0;
	while (*str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		nbr = nbr * 10;
		nbr += (sign * (*(str++) - 48));
		if (nbr > 2147483647)
			return (-1);
		if (nbr < -2147483648)
			return (0);
	}
	return (nbr);
}

/*int main(void)
{
	char *c =" w-98900rosa 4";
	printf("%i\n", atoi(c));
	printf("%i\n", ft_atoi(c));
}*/
