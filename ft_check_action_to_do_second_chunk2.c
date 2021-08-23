/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_action_to_do_second_chunk2.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:53:03 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 22:25:15 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_check_action_to_do_second_chunk2(t_list **list2,
					t_value_for_action a, t_list *max, t_list *min)
{
	t_list	*temp;
	t_list	*last;
	int		s;

	temp = *list2;
	last = ft_find_last_elem_list(list2);
	if (temp != NULL && temp->next != NULL)
		s = ft_find_the_elem_value_need(list2, 0, 0, 2);
	if (temp != NULL && temp->next != NULL && temp->nbr == s
		&& temp->next->nbr != min->nbr && temp->next->nbr != max->nbr
		&& last->nbr != min->nbr && last->nbr != max->nbr && a.smin == 0
		&& a.smax == 0)
	{
		a.smin = 1;
		a.i = PA;
		return (a);
	}
	return (ft_check_action_to_do_second_chunk3(list2, a, max, min));
}
