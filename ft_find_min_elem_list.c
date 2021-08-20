/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min_elem_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:23:44 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/18 11:44:04 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_find_min_elem_list(t_list **list)
{
	t_list	*temp;
	t_list	*temp2;

	temp = NULL;
	temp2 = NULL;
	temp = *list;
	temp2 = *list;
	while (temp != NULL)
	{
		if (temp->nbr < temp2->nbr)
			temp2 = temp;
		temp = temp->next;
	}
	return (temp2);
}
