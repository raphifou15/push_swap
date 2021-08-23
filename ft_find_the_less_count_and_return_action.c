/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_the_less_count_and_return_action.          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:22:46 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 22:27:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_the_less_count_and_return_action(t_count c, t_list **list,
	t_value_for_action a)
{
	t_list	*temp;
	int		s_min;

	temp = ft_find_last_elem_list(list);
	if (temp != NULL && temp->next != NULL)
	{
		s_min = ft_find_the_elem_value_need(list, 0, 0, 2);
		while (temp != NULL && temp->nbr != s_min && ++c.count5 > -1)
			temp = temp->prev;
		if (c.count5 < c.count1 && c.count5 < c.count2 && c.count5 < c.count3
			&& c.count5 < c.count4 && a.smin == 0)
			return (RRB);
	}
	if (c.count1 <= c.count2 && c.count1 <= c.count3 && c.count1 <= c.count4)
		return (RB);
	if (c.count1 > c.count2 && c.count2 <= c.count3 && c.count2 <= c.count4)
		return (RRB);
	if (c.count3 < c.count1 && c.count3 < c.count2 && c.count3 <= c.count4)
		return (RB);
	if (c.count4 < c.count1 && c.count4 < c.count2 && c.count4 < c.count3)
		return (RRB);
	return (RB);
}
