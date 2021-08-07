/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <rkhelif@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:31:29 by user42            #+#    #+#             */
/*   Updated: 2021/08/06 19:11:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **list)
{
	t_list	*temp;
	int		data_temp;

	temp = NULL;
	temp = *list;
	if (temp->next != NULL)
	{
		data_temp = temp->nbr;
		temp->nbr = temp->next->nbr;
		temp->next->nbr = data_temp;
	}
}