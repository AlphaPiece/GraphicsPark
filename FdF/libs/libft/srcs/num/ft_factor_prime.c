/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factor_prime.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 17:16:35 by zwang             #+#    #+#             */
/*   Updated: 2018/09/16 17:59:36 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_factor_prime(int n)
{
	int		i;

	if (n == 1)
	{
		ft_printf("1");
		return ;
	}
	i = 2;
	while (n / i != 1)
	{
		if (n % i == 0)
		{
			ft_printf("%d*", i);
			n /= i;
			i--;
		}
		i++;
	}
	ft_printf("%d", n);
}
