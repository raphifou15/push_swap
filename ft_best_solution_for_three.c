/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_solution_for_three.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:13:24 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/19 18:40:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_best_solution_for_three(t_list **list1, t_list **list2,
		void (**ptr)(t_list **list1, t_list **list2))
{
	t_list  *min_elem;
	t_list  *temp;

	temp = *list1;
	min_elem = ft_find_min_elem_list(list1);
	if (min_elem->index == 1)
		return (ft_action(list1, list2, ptr, RRA));
	if (min_elem->index == 2 && temp->nbr < temp->next->next->nbr)
		return (ft_action(list1, list2, ptr, SA));
	if (min_elem->index == 2 && temp->nbr > temp->next->next->nbr)
		return (ft_action(list1, list2, ptr, RA));
	if (min_elem->index == 3 && temp->nbr > temp->next->nbr)
		return (ft_action(list1, list2, ptr, SA));
	if (min_elem->index == 3 && temp->nbr < temp->next->nbr)
		return (ft_action(list1, list2, ptr, RRA));
}
