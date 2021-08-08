/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:08:54 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/08 16:11:20 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **list1, t_list **list2)
{
	t_list	*temp;
	t_list	*temp2;

	(void)list2;
	temp = NULL;
	temp2 = NULL;
	if (ft_more_than_one_elem(list1) == 1)
		return ;
	temp = *list1;
	temp2 = temp;
	while (temp->next != NULL)
		temp = temp->next;
	temp->prev->next = NULL;
	temp->prev = NULL;
	temp->next = temp2;
	temp2->prev = temp;
	*list1 = temp;
}
