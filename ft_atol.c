/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:53:07 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/05 11:24:55 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *str)
{
	long	nb;
	long	sign;
	int		i;

	i = -1;
	sign = 1;
	nb = 0;
	if (str[++i] == '-')
		sign = -1;
	else if (str[i] != '+')
		i = -1;
	while (str[++i] != '\0')
	{
		nb *= 10;
		nb += str[i] - 48;
	}
	return (nb * sign);
}
