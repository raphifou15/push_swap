/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:15:13 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/20 18:01:19 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*list;
	t_list	*list2;
	void	((*ptr[11])(t_list **list1, t_list **list2));
	t_value_for_action	action;
	t_list	*temp;

	if (argc == 1)
		return (0);
	if (ft_check_error(argv, argc) > 0)
		return (0);
	ft_init_ptr(ptr);
	list = NULL;
	list2 = NULL;
	list = ft_init_the_list(argv, argc);
	action = ft_init_action(&list, &list2);
	ft_sort_list(&list, &list2, ptr, action);
	temp = list;
	while (temp != NULL)
	{
		printf("%d ", temp->nbr);
		//printf("temp = %s ", (char *)temp);
		//printf("temp->prev = %s ", (char *)temp->prev);
		//printf("temp->next =%s\n", (char *)temp->next);
		//if (temp->next == NULL)
		//	break ;
		temp = temp->next;
	}
	ft_free_all_list(&list);
	ft_free_all_list(&list2);
	return (0);
}
