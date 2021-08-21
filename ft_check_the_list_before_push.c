/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_the_list_before_push.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:51:57 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/21 23:11:18 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_the_list_before_push(t_list **list1, t_list **list2,
		t_value_for_action a,
		void (**ptr)(t_list **list1, t_list **list2))
{
	t_list	*temp;
	t_list	*last;
	int		count;
	int		size;

	size = ft_find_number_elem(list1);
	count = 0;
	temp = *list1;
	last = ft_find_last_elem_list(list1);
	while (temp != NULL && temp->nbr != last->nbr)
	{
		count++;
		temp = temp->next;
	}
	if (count < (size / 2))
		a.i = RA;
	else
		a.i = RRA;
	while (last->nbr != a.v3)
	{
		ft_action(list1, list2, ptr, a.i);
		last = ft_find_last_elem_list(list1);
	}
}
