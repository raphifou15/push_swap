/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int_max2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:03:04 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/09 18:08:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_int_max2(char *str, int k, int check_0)
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
			if (str[k] != '0')
				check_0 = 1;
			if (str[k] == '0' && (str[k + 1] >= 48 && str[k] <= 57)
				&& check_0 == 0)
				return (1);
			nbr *= 10;
			nbr += (str[k] - 48);
			if (nbr > 2147483648 || (sign == 1 && nbr > 2147483647))
				return (1);
		}
	}
	if (str[k] == ' ')
		return (ft_check_int_max2(str, k, 0));
	return (0);
}
