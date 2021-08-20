/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_last_elem_list.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:37:30 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/16 21:00:36 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_find_last_elem_list(t_list **list1)
{
	t_list	*temp;

	temp = NULL;
	temp = *list1;
	while(temp != NULL && temp->next != NULL)
		temp = temp->next;
	return (temp);
}
