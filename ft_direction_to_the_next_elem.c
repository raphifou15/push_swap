/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_direction_to_the_next_elem.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:18:09 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 16:38:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_direction_to_the_next_elem(t_list **list2, t_list *max,
					t_list *min, t_value_for_action a)
{
	t_list	*temp;
	t_count	c;

	temp = *list2;
	c = ft_init_count();
	while (temp != NULL && temp->nbr != min->nbr && ++c.count1 != -1)
		temp = temp->next;
	temp = ft_find_last_elem_list(list2);
	c.count2++;
	while (temp != NULL && temp->nbr != min->nbr && ++c.count2 != -1)
		temp = temp->prev;
	temp = *list2;
	while (temp != NULL && temp->nbr != max->nbr && ++c.count3 != -1)
		temp = temp->next;
	temp = ft_find_last_elem_list(list2);
	++c.count4;
	while (temp != NULL && temp->nbr != max->nbr && ++c.count4 != -1)
		temp = temp->prev;
	a.i = ft_find_the_less_count_and_return_action(c, list2, a);
	return (a);
}
/*
**  c.count1 = 0; // min sens rb;
** 	c.count2 = 0; // min sens rrb;
**  c.count3 = 0;   // max sens rb;
**  c.count4 = 0; // max sens rrb;
*/
