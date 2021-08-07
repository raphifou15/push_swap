/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_all_elem.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:13:16 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/06 17:18:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_list_add_all_elem(t_list **list, char *str)
{
	t_list	*n;
	int		nbr;

	n = NULL;
	nbr = (int)ft_atol(str);
	if ((n = ft_create_new_elem(nbr)) == NULL)
	{
		ft_free_all_list(list);
		return (1);
	}
	if (*list == NULL)
	{
		*list = n;
		return (0);
	}
	ft_list_add_all_elem_2(list, n);
	return (0);
}
