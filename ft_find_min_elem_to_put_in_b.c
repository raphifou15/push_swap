/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min_elem_to_put_in_b.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:32:52 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/19 21:18:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_min_elem_to_put_in_b(t_list **list1, t_list **list2,
		void (**ptr)(t_list **list1, t_list **list2))
{
	t_list	*temp;
	t_list	*min;
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 0;
	temp = *list1;
	min = ft_find_min_elem_list(list1);
	if (temp->nbr == min->nbr)
	{
		return (ft_action(list1, list2, ptr, PB));
	}
	while (temp != NULL && temp->nbr != min->nbr)
	{
		count1++;
		temp = temp->next;
	}
	count2++;
	temp = ft_find_last_elem_list(list1);
	while (temp != NULL && temp->nbr != min->nbr)
	{
		count2++;
		temp = temp->prev;
	}
	if (count1 <= count2)
		ft_action(list1, list2, ptr, RA);
	else
		ft_action(list1, list2, ptr, RRA);
}
