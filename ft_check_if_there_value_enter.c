/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_there_value_enter.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:22:42 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/21 20:01:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_if_there_value_enter(t_list **list1, t_value_for_action a)
{
	t_list	*temp;

	temp = *list1;
	while (temp != NULL)
	{
		if (a.v4 <= temp->nbr && temp->nbr <= a.v3)
			return (1);
		temp = temp->next;
	}
	return (0);
}

