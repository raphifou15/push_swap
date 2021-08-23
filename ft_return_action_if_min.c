/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_action_if_min.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:17:46 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/22 22:20:12 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_return_action_if_min(t_value_for_action a)
{
	if (a.smin == 1)
	{
		a.smin = 0;
		return (ft_return_good_values_for_action(a, 2, 0, PA));
	}
	return (ft_return_good_values_for_action(a, 1, 0, PA));
}
