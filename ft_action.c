/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:21:56 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/19 21:18:29 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_action(t_list **list1, t_list **list2,
		void (**ptr)(t_list **list1, t_list **list2), int action)
{
	ptr[action](list1, list2);
	ft_display(action);
}
