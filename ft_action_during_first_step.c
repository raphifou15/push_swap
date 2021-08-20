/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action_during_first_step.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:52:17 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/20 18:06:52 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action  ft_action_during_first_step(t_list **list1, t_list **list2,
					t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2))
{
	 a = ft_check_action_to_do_first(list1, list2, a);
	 if (a.i != -1)
	 	ft_action(list1, list2, ptr, a.i);
	 else
	 	a.step = 2;
	return (a);
}
