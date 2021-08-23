/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action_to_do_second_chunk3.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:12:49 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 22:24:24 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_check_action_to_do_second_chunk3(t_list **list2,
					t_value_for_action a, t_list *max, t_list *min)
{
	t_list	*temp;
	t_list	*last;
	int		sm;

	temp = *list2;
	last = ft_find_last_elem_list(list2);
	if (temp != NULL && temp->next != NULL)
		sm = ft_find_the_elem_value_need(list2, 0, 0, a.size2 - 1);
	if (temp != NULL && temp->next != NULL && temp->nbr == sm
		&& temp->next->nbr != min->nbr && temp->next->nbr != max->nbr
		&& last->nbr != min->nbr && last->nbr != max->nbr && a.smax == 1
		&& a.smin == 0)
	{
		a.smax = 1;
		a.i = PA;
		return (a);
	}
	if (temp != NULL)
		return (ft_direction_to_the_next_elem(list2, max, min, a));
	if (temp == NULL && a.ra_next > 0)
		return (ft_return_good_values_for_action(a, 0, -1, RA));
	a.i = -1;
	return (a);
}
