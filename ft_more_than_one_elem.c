/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_more_than_one_elem.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:24:03 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/08 10:29:58 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_more_than_one_elem(t_list **list)
{
	int		i;
	t_list	*temp;

	temp = NULL;
	temp = *list;
	i = -1;
	while (temp != NULL && ++i < 1)
		temp = temp->next;
	if (i < 1)
		return (1);
	return (0);
}
