/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_action_after_push.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:52:38 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 17:00:38 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_return_action_after_push(t_list **list2,
					t_value_for_action a, t_list *max, t_list *min)
{
	if (a.sa == 1)
	{
		a.sa = 0;
		a.i = SA;
		return (a);
	}
	if (a.ra > 0)
	{
		a.ra--;
		a = ft_direction_to_the_next_elem(list2, max, min, a);
		if (a.i == RB)
			return (ft_return_good_values_for_action(a, a.ra, 0, RR));
		return (ft_return_good_values_for_action(a, a.ra, 0, RA));
	}
	return (a);
}
