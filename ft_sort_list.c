/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:30:43 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/19 21:27:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_list(t_list **list1, t_list **list2,
	void (**ptr)(t_list **list1, t_list **list2), t_value_for_action a)
{
	if (ft_checklist_is_ordered_and_list_b_empty(list1, list2) == 1)
	{
		if (a.size <= 25)
			return (ft_sort_list_under_26(list1, list2, a, ptr));
		if (a.size <= 100)
			return (ft_sort_list_under_101(list1, list2, a, ptr));
	}
}
