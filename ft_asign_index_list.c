/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asign_index_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:39:54 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/22 15:14:24 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_asign_index_list(t_list **list)
{
	t_list	*temp;
	long	i;

	i = 0;
	temp = NULL;
	temp = *list;
	while (temp)
	{
		temp->index = ++i;
		temp = temp->next;
	}
}
