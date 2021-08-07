/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:15:13 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/06 19:06:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*list;
	t_list	*list2;
	t_list	*temp;

	if (ft_check_error(argv, argc) > 0)
		return (0);
	list = NULL;
	list = ft_init_the_list(argv, argc);
	ft_sb(&list);
	temp = list;
	(void)list2;
	while (temp)
	{
		printf("%d\n", temp->nbr);
		temp = temp->next;
	}
	ft_free_all_list(&list);
	return (0);
}
