/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 11:11:21 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/04 17:53:44 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_int_max(char *str)
{
	int		nbr;
	long	nb;

	nbr = ft_strlen(str);
	if (nbr > 11)
		return (1);
	nb = ft_atol(str);
	if (nb > 2147483647 || nb < -2147483648)
		return (1);
	return (0);
}
