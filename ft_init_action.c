/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_action.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:16:47 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/20 22:57:14 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action  ft_init_action(t_list **list1, t_list **list2)
{
	t_value_for_action  a;
	a.size = ft_find_number_elem(list1);
	a.size2 = ft_find_number_elem(list2);
	ft_asign_index_list(list1);
	a.middle = ft_find_middle_elem(list1, 0, 0, a.size);
	//printf("a.middle = %d\n", a.middle);
	a.chunk = (a.size / 50);
	a.ra = 0;
	a.ra_next = 0;
	a.step = 1;
	a.trois_quart = ft_find_trois_quart_elem(list1, 0, 0, a.size);
	return (a);
}
