/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_chunk_last_part.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:24:14 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/21 20:30:34 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void                ft_sort_chunk_last_part(t_list **list1, t_list **list2,
					t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2))
{
	 while (a.i != -1)
	 {
	 	a = ft_check_action_to_do_second(list2, a);
		if (a.i != -1)
			ft_action(list1, list2, ptr, a.i);
	 }
}
