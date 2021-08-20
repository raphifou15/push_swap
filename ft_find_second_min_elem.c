/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_second_min_elem.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:59:42 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/20 21:59:45 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_find_second_min_elem(t_list **list, t_list *min)
{
	t_list	*temp;
	t_list	*temp2;

	temp = NULL;
	temp2 = NULL;
	temp = *list;
	temp2 = *list;
	while (temp != NULL)
	{
		if (temp->nbr < temp2->nbr && temp->nbr != min->nbr)
			temp2 = temp;
		temp = temp->next;
	}
	return (temp2);
}
