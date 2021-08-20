/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_good_values_for_action.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:56:00 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/20 11:58:29 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_value_for_action	ft_return_good_values_for_action(t_value_for_action a,
					int ra, int ra_next, int i)
{
	a.i = i;
	a.ra = ra;
	a.ra_next += ra_next;
	return (a);
}
