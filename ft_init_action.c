/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_action.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:16:47 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 17:53:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_init_action(t_list **list1, t_list **list2)
{
	t_value_for_action	a;

	a.size = ft_find_number_elem(list1);
	a.size2 = ft_find_number_elem(list2);
	ft_asign_index_list(list1);
	a.middle = ft_find_middle_elem(list1, 0, 0, a.size);
	a.chunk = (a.size / 87);
	if (a.size % 87 != 0)
		a.chunk++;
	a.m = a.size % 87;
	a.ra = 0;
	a.ra_next = 0;
	a.step = 1;
	a.level = 0;
	a.smin = 0;
	a.smax = 0;
	a.sa = 0;
	a.i = 45;
	a.v1 = ft_find_the_elem_value_need(list1, 0, 0, a.size / 10);
	a.v2 = ft_find_the_elem_value_need(list1, 0, 0, (a.size / 10) * 4);
	a.v3 = ft_find_the_elem_value_need(list1, 0, 0, (a.size / 10) * 6);
	a.v4 = ft_find_the_elem_value_need(list1, 0, 0, (a.size / 10) * 9);
	return (a);
}
