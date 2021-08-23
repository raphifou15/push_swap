/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_chunk_first_part1.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:28:51 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/23 17:53:32 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_chunk_first_part1(t_list **list1, t_list **list2,
		t_value_for_action a, void (**ptr)(t_list **list1, t_list **list2))
{
	if (a.chunk == 1 && a.m > 0)
	{
		a.v1 = ft_find_the_elem_value_need(list1, 0, 0, (a.level + (a.m / 5)));
		a.v2 = ft_find_the_elem_value_need(list1, 0, 0,
				(a.level + a.m - (a.m / 5)));
		a.v3 = ft_find_the_elem_value_need(list1, 0, 0, (a.level + a.m));
		a.v4 = ft_find_the_elem_value_need(list1, 0, 0, (a.level + 1));
	}
	else
	{
		a.v1 = ft_find_the_elem_value_need(list1, 0, 0, (a.level + 18));
		a.v2 = ft_find_the_elem_value_need(list1, 0, 0, (a.level + 87 - 18));
		a.v3 = ft_find_the_elem_value_need(list1, 0, 0, (a.level + 87));
		a.v4 = ft_find_the_elem_value_need(list1, 0, 0, (a.level + 1));
	}
	while (a.i != -1)
	{
		a = ft_action_to_do_part1(list1, list2, a);
		if (a.i != -1)
			ft_action(list1, list2, ptr, a.i);
	}
}
