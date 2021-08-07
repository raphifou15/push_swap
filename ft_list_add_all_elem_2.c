/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_all_elem_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:44:51 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/05 16:09:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_list_add_all_elem_2(t_list **list, t_list *n)
{
	t_list	*temp;

	temp = NULL;
	temp = *list;
	while (temp->next)
		temp = temp->next;
	temp->next = n;
	n->prev = temp;
	n->next = NULL;
}
