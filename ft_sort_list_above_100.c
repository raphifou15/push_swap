/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list_above_100.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:45:27 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/22 00:05:48 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_list_above_100(t_list **list1, t_list **list2,
		t_value_for_action a, void (**ptr)(t_list **list1, t_list **list2))
{
	while (ft_checklist_is_ordered_and_list_b_empty(list1, list2) == 1)
	{
		a.level = 0;
		while (a.chunk != 0 || ft_checklist_is_ordered_and_list_b_empty(list1,
			list2) == 1)
		{
			 a.v3 = ft_find_the_elem_value_need(list1, 0, 0, (a.level));
			ft_sort_chunk_first_part1(list1, list2, a, ptr);
			if (a.level != 0)
				ft_check_the_list_before_push(list1, list2, a, ptr);
			ft_sort_chunk_last_part(list1, list2, a, ptr);
			if (a.chunk == 1)
				return;
			a.chunk--;
			a.level += 85;
		}
	}
}
