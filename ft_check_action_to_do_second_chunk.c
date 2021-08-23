/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_action_to_do_second_chunk.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:59:03 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 23:38:01 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_check_action_to_do_second_chunk(t_list **list2,
					t_value_for_action a)
{
	t_list	*temp;
	t_list	*max;
	t_list	*min;

	temp = *list2;
	max = ft_find_max_elem_list(list2);
	min = ft_find_min_elem_list(list2);
	a.size2 = ft_find_number_elem(list2);
	if (a.sa == 1 || a.ra > 0)
		return (ft_return_action_after_push(list2, a, max, min));
	if (temp != NULL && temp->nbr == min->nbr)
		return (ft_return_action_if_min(a));
	if (temp != NULL && temp->nbr == max->nbr)
		return (ft_return_action_if_max(a));
	return (ft_check_action_to_do_second_chunk2(list2, a, max, min));
}
