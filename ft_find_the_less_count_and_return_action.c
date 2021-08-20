/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_the_less_count_and_return_action.          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:22:46 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/20 17:39:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_the_less_count_and_return_action(t_count c)
{
	if (c.count1 <= c.count2 && c.count1 <= c.count3 && c.count1 <= c.count4)
		return (RB);
	if (c.count1 > c.count2 && c.count2 <= c.count3 && c.count2 <= c.count4)
		return (RRB);
	if (c.count3 < c.count1 && c.count3 < c.count2 && c.count3 <= c.count4)
		return (RB);
	if (c.count4 < c.count1 && c.count4 < c.count2 && c.count4 < c.count3)
		return (RRB);
	return (RB);
}
