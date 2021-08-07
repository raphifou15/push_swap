/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:15:13 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/07 20:07:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*list;
	t_list	*list2;
	t_list	*temp;
	t_list	*temp2;

	temp = NULL;
	temp2 = NULL;

	if (ft_check_error(argv, argc) > 0)
		return (0);
	list = NULL;
	list2 = NULL;
	list = ft_init_the_list(argv, argc);
	ft_pb(&list, &list2);
	ft_pb(&list, &list2);
	ft_pb(&list, &list2);
	ft_pb(&list, &list2);
	ft_pb(&list, &list2);
	ft_pa(&list2, &list);
	ft_pa(&list2, &list);
	ft_pa(&list2, &list);
	ft_pa(&list2, &list);
	ft_pa(&list2, &list);
	ft_pa(&list2, &list);
	ft_pa(&list2, &list);
	temp = list;
	temp2 = list2;
	while (temp != NULL)
	{
		printf("%d ", temp->nbr);
		printf("%s ", (char *)temp->prev);
		printf("%s\n", (char *)temp->next);
		if (temp->next == NULL)
			break ;
		temp = temp->next;
	}
	
	while (temp2)
	{
		printf("%d ", temp2->nbr);
		printf("%s ", (char *)temp2->prev);
		printf("%s\n", (char *)temp2->next);
		if (temp2->next == NULL)
			break ;
		temp2 = temp2->next;
	}

/*	while (temp)
	{
		printf("%d\n", temp->nbr);
		temp = temp->prev;
	}*/
	ft_free_all_list(&list);
	ft_free_all_list(&list2);
	return (0);
}
