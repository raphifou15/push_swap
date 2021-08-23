/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action_to_do_part1_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:33:49 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 22:41:04 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_action_to_do_part1_2(t_list **list2, t_list *temp2,
					t_value_for_action a)
{
	if (temp2 != NULL && temp2->next != NULL && (temp2->nbr < a.v1
			|| temp2->nbr > a.v2) && ft_check_list_1(a.v1, a.v2, list2) == 1)
		a.i = RB;
	else
		a.i = PB;
	return (a);
}
