/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:15:40 by rosferna          #+#    #+#             */
/*   Updated: 2021/11/04 17:50:11 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countdigits(long n)
{
	int	d;

	if (n < 0)
		d = 1;
	else
		d = 0;
	while (1)
	{
		n = n / 10;
		d++;
		if (n == 0)
			break ;
	}
	return (d);
}

char	*ft_itoa(int n)
{
	int		d;
	long	nn;
	char	*ret;

	nn = (long)n;
	d = countdigits(nn);
	ret = malloc((d + 1) * sizeof(char));
	if (!ret)
		return (0);
	if (nn < 0)
	{
		ret[0] = '-';
		nn = nn * -1;
	}
	ret[d] = '\0';
	while (1)
	{
		ret[d - 1] = nn % 10 + '0';
		nn = nn / 10;
		d--;
		if (nn == 0)
			break ;
	}
	return (ret);
}

/*int main()
{
	long i = -2147483648;
	printf("%s\n", ft_itoa(i));
}*/
