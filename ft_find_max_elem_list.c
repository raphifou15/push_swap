/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max_elem_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:41:56 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/17 12:01:21 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_find_max_elem_list(t_list **list1)
{
	t_list	*temp;
	t_list	*temp2;

	temp = NULL;
	temp2 = NULL;
	temp = *list1;
	temp2 = *list1;
	while (temp != NULL)
	{
		if (temp->nbr > temp2->nbr)
			temp2 = temp;
		temp = temp->next;
	}
	return (temp2);
}
