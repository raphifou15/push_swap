/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_the_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:59:49 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/06 18:54:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_init_the_list(char **argv, int argc)
{
	t_list	*list;
	int		i;

	i = 0;
	list = NULL;
	while (++i < argc)
		if (ft_list_add_all_elem(&list, argv[i]) == 1)
			return (NULL);
	return (list);
}
