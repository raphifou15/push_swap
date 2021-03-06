/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_action_to_do_first.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:13:56 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/22 17:11:15 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_check_action_to_do_first(t_list **list1, t_list **list2,
					t_value_for_action a)
{
	t_list	*temp;
	t_list	*temp2;

	temp = *list1;
	temp2 = *list2;
	if (ft_check_if_there_value_less(list1, a) == 1)
	{
		if (temp->nbr < a.middle)
			return (ft_check_action_to_do_first_next(list2, temp2, a));
		else
		{
			if (temp2 != NULL && temp2->next != NULL && (temp2->nbr < a.v1
					|| temp2->nbr > a.v2))
				a.i = RR;
			else
				a.i = RA;
			return (a);
		}
	}
	a.i = -1;
	return (a);
}
