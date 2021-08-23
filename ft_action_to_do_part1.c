/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action_to_do_part1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:49:47 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 22:38:11 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_action_to_do_part1(t_list **list1, t_list **list2,
					t_value_for_action a)
{
	t_list	*temp;
	t_list	*temp2;

	temp = *list1;
	temp2 = *list2;
	if (ft_check_if_there_value_enter(list1, a) == 1)
	{
		if (a.v4 <= temp->nbr && temp->nbr <= a.v3)
			return (ft_action_to_do_part1_2(list2, temp2, a));
		else
		{
			if (temp2 != NULL && temp2->next != NULL
				&& (temp2->nbr < a.v1 || temp2->nbr > a.v2))
				a.i = RR;
			else
				a.i = RA;
			return (a);
		}
	}
	a.i = -1;
	return (a);
}
