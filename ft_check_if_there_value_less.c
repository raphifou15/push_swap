/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_there_value_less.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:15:13 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/18 10:17:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_if_there_value_less(t_list **list1, t_value_for_action a)
{
	t_list	*temp;

	temp = *list1;
	while (temp != NULL)
	{
		if (temp->nbr < a.middle)
			return (1);
		temp = temp->next;
	}
	return (0);
}
