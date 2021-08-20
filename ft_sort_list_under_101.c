/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list_under_101.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:32:31 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/21 00:25:24 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort_list_under_101(t_list **list1, t_list **list2,
		t_value_for_action a, void (**ptr)(t_list **list1, t_list **list2))
{
 	while (ft_checklist_is_ordered_and_list_b_empty(list1, list2) == 1)
	{
		if (a.step == 1)
			a = ft_action_during_first_step(list1, list2, a, ptr);
		if (a.step == 2)
			a = ft_action_during_second_step(list1, list2, a, ptr);
		if (a.step == 3)
			a = ft_action_during_third_step(list1, list2, a, ptr);
		if (a.step == 4)
			a = ft_action_during_fouth_step(list1, list2, a, ptr);
		if (a.step == 5)
			return ;
	}
}
