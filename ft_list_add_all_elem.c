/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_all_elem.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:13:16 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/11 09:21:10 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_list_add_all_elem(t_list **list, char *str, int i)
{
	t_list	*n;
	int		nbr;
	int		size;

	while (str[++i] != '\0')
	{
		n = NULL;
		nbr = (int)ft_atol(str, i);
		n = ft_create_new_elem(nbr);
		size = ft_size_of_number(str, i);
		i += (size);
		if (n == NULL)
		{
			ft_free_all_list(list);
			return (1);
		}
		if (*list != NULL)
			ft_list_add_all_elem_2(list, n);
		if (*list == NULL)
			*list = n;
		if (str[i] == '\0')
			--i;
	}
	return (0);
}
