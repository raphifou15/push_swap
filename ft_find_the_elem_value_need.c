/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_the_elem_value_need.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:01:06 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/21 10:14:12 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_the_elem_value_need(t_list **list, int nbr, long index, int elem)
{
	t_list	*temp;
	t_list	*temp2;

	temp = *list;
	temp2 = *list;
	if (++index != 1)
	{
		while (temp->nbr <= nbr)
			temp = temp->next;
		temp2 = temp;
	}
	while (temp != NULL)
	{
		if (index != 1)
		{
			if ( temp->nbr < temp2->nbr && temp->nbr > nbr)
				temp2 = temp;
		}
		else if (temp->nbr < temp2->nbr)
			temp2 = temp;
		temp = temp->next;
	}
	if (elem <= index)
		return (temp2->nbr);
	return (ft_find_the_elem_value_need(list, temp2->nbr, index, elem));
}
