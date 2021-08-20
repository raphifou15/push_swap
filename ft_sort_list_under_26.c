/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list_under_26.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:33:03 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/19 21:17:44 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_list_under_26(t_list **list1, t_list **list2,
		t_value_for_action a, void (**ptr)(t_list **list1, t_list **list2))
{
	while(ft_checklist_is_ordered_and_list_b_empty(list1, list2) == 1)
	{
		ft_asign_index_list(list1);
		a.size = ft_find_number_elem(list1);
		a.size2 = ft_find_number_elem(list2);
		if (a.size == 2 && ft_check_list_is_ordered(list1) == 1)
			ft_action(list1, list2, ptr, SA);
		if (a.size == 3 && ft_check_list_is_ordered(list1) == 1)
			ft_best_solution_for_three(list1, list2, ptr);
		if (a.size > 3 && ft_check_list_is_ordered(list1) == 1)
			ft_find_min_elem_to_put_in_b(list1, list2, ptr);
		if (a.size2 > 0 && ft_check_list_is_ordered(list1) == 0 &&
			ft_check_list_is_ordered2(list2) == 0)
			ft_action(list1, list2, ptr, PA);
	}
}
