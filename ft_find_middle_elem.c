/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_middle_elem.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:20:06 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/22 15:09:05 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_middle_elem(t_list **list, int nbr, long index, int size)
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
			if (temp->nbr < temp2->nbr && temp->nbr > nbr)
				temp2 = temp;
		}
		else if (temp->nbr < temp2->nbr)
			temp2 = temp;
		temp = temp->next;
	}
	if ((size / 2) < index)
		return (temp2->nbr);
	return (ft_find_middle_elem(list, temp2->nbr, index, size));
}
