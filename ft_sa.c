/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <rkhelif@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:31:29 by user42            #+#    #+#             */
/*   Updated: 2021/08/08 15:46:21 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **list1, t_list **list2)
{
	t_list	*temp;
	int		data_temp;

	(void) list2;
	temp = NULL;
	temp = *list1;
	if (temp->next != NULL)
	{
		data_temp = temp->nbr;
		temp->nbr = temp->next->nbr;
		temp->next->nbr = data_temp;
	}
}
