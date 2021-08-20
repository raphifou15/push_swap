/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:09:09 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/11 15:26:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_ptr(void (**ptr)(t_list **list1, t_list **list2))
{
	ptr[0] = ft_sa;
	ptr[1] = ft_sb;
	ptr[2] = ft_ss;
	ptr[3] = ft_pa;
	ptr[4] = ft_pb;
	ptr[5] = ft_ra;
	ptr[6] = ft_rb;
	ptr[7] = ft_rr;
	ptr[8] = ft_rra;
	ptr[9] = ft_rrb;
	ptr[10] = ft_rrr;
}
