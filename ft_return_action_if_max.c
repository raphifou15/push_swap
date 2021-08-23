/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_action_if_max.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:35:36 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 19:37:35 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_return_action_if_max(t_value_for_action a)
{
	if (a.smin == 1 || a.smax == 1)
		a.sa = 1;
	a.smax = 0;
	return (ft_return_good_values_for_action(a, 0, 1, PA));
}
