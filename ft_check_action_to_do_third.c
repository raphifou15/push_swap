/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_action_to_do_third.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:33:24 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/22 21:32:53 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_check_action_to_do_third(t_list **list1, t_list **list2,
					t_value_for_action a)
{
	t_list	*temp;
	t_list	*temp2;

	temp = *list1;
	temp2 = *list2;
	if (temp2 != NULL && temp2->next != NULL && (temp2->nbr < a.v3
			|| temp2->nbr > a.v4) && ft_check_list_1(a.v3, a.v4, list2) == 1)
	{
		a.i = RB;
		return (a);
	}
	if (ft_check_if_there_value_more(list1, a) == 1)
	{
		if (temp->nbr >= a.middle)
			a.i = PB;
		if (temp->nbr >= a.middle)
			return (a);
		else
		{
			a.i = RA;
			return (a);
		}
	}
	a.i = -1;
	return (a);
}
