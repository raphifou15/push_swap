/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <rkhelif@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:33:31 by user42            #+#    #+#             */
/*   Updated: 2021/08/07 19:57:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb2(t_list **list1, t_list **list2)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;

	temp = NULL;
	temp2 = NULL;
	temp3 = NULL;
	temp = *list1;
	temp2 = temp;
	temp3 = *list2;
	temp = temp->next;
	if (temp != NULL)
		temp->prev = NULL;
	*list1 = temp;
	temp2->prev = NULL;
	temp3->prev = temp2;
	temp2->next = *list2;
	*list2 = temp2;
}
