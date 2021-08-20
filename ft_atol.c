/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:53:07 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/11 09:22:34 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *str, int i)
{
	long	nb;
	long	sign;

	i -= 1;
	sign = 1;
	nb = 0;
	if (str[++i] == '-')
		sign = -1;
	else if (str[i] != '+')
		--i;
	while (str[++i] != '\0' && str[i] != ' ')
	{
		nb *= 10;
		nb += str[i] - 48;
	}
	return (nb * sign);
}
