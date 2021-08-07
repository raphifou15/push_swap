/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:45:15 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/07 19:56:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_list **list1, t_list **list2)
{
	t_list	*temp;
	t_list	*temp2;

	temp = NULL;
	temp2 = NULL;
	temp = *list1;
	if (temp == NULL)
		return ;
	if (*list2 == NULL)
	{
		temp2 = temp;
		temp = temp->next;
		temp2->next = NULL;
		*list2 = temp2;
		if (temp != NULL)
			temp->prev = NULL;
		*list1 = temp;
		return ;
	}
	ft_pb2(list1, list2);
}
