/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:28:21 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/11 10:40:38 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display(int index)
{
	if (index == 0)
		ft_put_str("sa\n");
	if (index == 1)
		ft_put_str("sb\n");
	if (index == 2)
		ft_put_str("ss\n");
	if (index == 3)
		ft_put_str("pa\n");
	if (index == 4)
		ft_put_str("pb\n");
	if (index == 5)
		ft_put_str("ra\n");
	if (index == 6)
		ft_put_str("rb\n");
	if (index == 7)
		ft_put_str("rr\n");
	if (index == 8)
		ft_put_str("rra\n");
	if (index == 9)
		ft_put_str("rrb\n");
	if (index == 10)
		ft_put_str("rrr\n");
}
