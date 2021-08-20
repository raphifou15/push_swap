/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checklist_is_ordered_and_list_b_empty.          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:10:55 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/19 17:12:11 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checklist_is_ordered_and_list_b_empty(t_list **list1, t_list **list2)
{
	t_list	*temp;

	temp = NULL;
	if (*list2 != NULL)
		return (1);
	temp = *list1;
	while (temp != NULL && temp->next != NULL)
	{
		if (temp->nbr > temp->next->nbr)
			return (1);
		temp = temp->next;
	}
	return (0);
}
