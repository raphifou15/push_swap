/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int_max2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:03:04 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/08 21:26:48 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_int_max2(char *str, int k)
{
	long	nbr;
	int		sign;

	sign = 1;
	nbr = 0;
	while (str[++k] != '\0' && str[k] != ' ')
	{
		if (str[k] == '-')
			sign = -1;
		if (str[k] >= 48 && str[k] <= 57)
		{
			nbr *= 10;
			nbr += (str[k] - 48);
			if (nbr > 2147483648 || (sign == 1 && nbr > 2147483647))
				return (1);
		}
	}
	if (str[k] == ' ')
		return (ft_check_int_max2(str, k));
	return (0);
}
