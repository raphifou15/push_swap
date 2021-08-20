/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action_during_fouth_step.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:14:27 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/20 22:53:58 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_action_during_fouth_step(t_list **list1, t_list **list2,
					t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2))
{
	a = ft_check_action_to_do_fouth(list2, a);
	if (a.i != -1)
		ft_action(list1, list2, ptr, a.i);
	else
		a.step = 5;
	return (a);
}
