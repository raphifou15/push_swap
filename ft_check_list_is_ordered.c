/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_is_ordered.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 09:02:11 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/16 17:42:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_list_is_ordered(t_list **list)
{
	t_list *temp;

	temp = NULL;
	temp = *list;
	while (temp != NULL && temp->next != NULL)
	{
		if (temp->nbr > temp->next->nbr)
			return (1);
		temp = temp->next;
	}
	return (0);
}