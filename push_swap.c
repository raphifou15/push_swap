/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:15:13 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/08 19:08:41 by rkhelif          ###   ########.fr       */
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
//	list = ft_init_the_list(argv, argc);
/*
	ft_pb(&list, &list2);
	ft_pb(&list, &list2);
	ft_rrr(&list, &list2);
	temp = list;
	temp2 = list2;
	while (temp != NULL)
	{
		printf("%d ", temp->nbr);
		printf("temp = %s ", (char *)temp);
		printf("temp->prev = %s ", (char *)temp->prev);
		printf("temp->next =%s\n", (char *)temp->next);
		if (temp->next == NULL)
			break ;
		temp = temp->next;
	}
	printf("\n --------------------- \n");
	while (temp2)
	{
		printf("%d ", temp2->nbr);
		printf("temp2 = %s ", (char *)temp2);
		printf("temp2->prev = %s ", (char *)temp2->prev);
		printf("temp2->next =%s\n", (char *)temp2->next);
		if (temp2->next == NULL)
			break ;
		temp2 = temp2->next;
	}
*/
/*	ft_free_all_list(&list);
	ft_free_all_list(&list2);*/
	return (0);
}
