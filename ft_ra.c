/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:59:37 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/08 15:58:08 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **list1, t_list **list2)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;

	temp = NULL;
	temp2 = NULL;
	temp3 = NULL;
	(void)list2;
	if (ft_more_than_one_elem(list1) == 1)
		return ;
	temp = *list1;
	temp2 = temp;
	temp3 = temp;
	while (temp->next != NULL)
		temp = temp->next;
	temp3 = temp3->next;
	temp->next = temp2;
	temp2->prev = temp;
	temp2->next = NULL;
	temp3->prev = NULL;
	*list1 = temp3;
}
