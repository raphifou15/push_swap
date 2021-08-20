/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_number_elem.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:52:09 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/11 13:57:29 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_number_elem(t_list **list)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = NULL;
	temp = *list;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
