/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_is_ordered2.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:29:26 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/22 19:40:27 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_list_is_ordered2(t_list **list)
{
	t_list	*temp;

	temp = NULL;
	temp = *list;
	while (temp != NULL && temp->next != NULL)
	{
		if (temp->nbr < temp->next->nbr)
			return (1);
		temp = temp->next;
	}
	return (0);
}
