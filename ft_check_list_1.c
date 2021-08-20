/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 00:12:32 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/21 00:16:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_list_1(int a, int b, t_list **list2)
{
	t_list *temp;

	temp = *list2;
	while (temp != NULL)
	{
		if (temp->nbr >= a && temp->nbr <= b)
			return (1);
		temp = temp->next;
	}
	return (0);
}
