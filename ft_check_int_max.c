/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:11:46 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/09 17:57:22 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_int_max(char **argv, int argc)
{
	int		i;
	int		k;
	long	nbr;
	int		check_0;

	check_0 = 0;
	k = -1;
	i = 0;
	while (++i < argc)
	{
		nbr = 0;
		if (ft_check_int_max2(argv[i], k, check_0) == 1)
			return (1);
	}
	return (0);
}
