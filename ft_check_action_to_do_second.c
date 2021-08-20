/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_action_to_do_second.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 09:37:56 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/20 22:22:04 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_check_action_to_do_second(t_list **list2,
					t_value_for_action a)
{
	t_list				*temp;
	t_list				*max;
	t_list				*min;

	temp = *list2;
	max = ft_find_max_elem_list(list2);
	min = ft_find_min_elem_list(list2);
	if (a.ra == 1)
	{
		a = ft_direction_to_the_next_elem(list2, max, min, a);
		if (a.i == RB)
			return (ft_return_good_values_for_action(a, 0, 0, RR));
		return (ft_return_good_values_for_action(a, 0, 0, RA));
	}
	if (temp != NULL && temp->nbr == min->nbr)
		return (ft_return_good_values_for_action(a, 1, 0, PA));
	if (temp != NULL && temp->nbr == max->nbr)
		return (ft_return_good_values_for_action(a, 0, 1, PA));
	if (temp != NULL)
		return (ft_direction_to_the_next_elem(list2, max, min, a));
	if (temp == NULL && a.ra_next > 0)
		return (ft_return_good_values_for_action(a, 0, -1, RA));
	a.i = -1;
	return (a);	
}
