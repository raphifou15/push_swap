/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:32:54 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/08 21:17:30 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef	struct	s_list
{
	struct	s_list	*next;
	struct	s_list	*prev;
	int					nbr;
}				t_list;

void	ft_put_str(char *str);
long	ft_atol(char *str);

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int		ft_check_error(char **argv, int argc);

int		ft_check_string(char **argv, int argc);
int		ft_check_int_max(char **argv, int argc);
int		ft_check_int_max2(char *str, int k);

t_list	*ft_init_the_list(char **argv, int argc);
int		ft_list_add_all_elem(t_list **list, char *str);
void	ft_list_add_all_elem_2(t_list **list, t_list *n);
t_list	*ft_create_new_elem(int nbr);
void	ft_free_all_list(t_list **list);
void	ft_sa(t_list **list1, t_list **list2);
void	ft_sb(t_list **list, t_list **list2);
void	ft_ss(t_list **list1, t_list **list2);
void	ft_pb(t_list **list1, t_list **list2);
void	ft_pb2(t_list **list1, t_list **list2);
void	ft_pa(t_list **list1, t_list **list2);
void	ft_ra(t_list **list1, t_list **list2);
void	ft_rb(t_list **list1, t_list **list2);
void	ft_rr(t_list **list1, t_list **list2);
void	ft_rra(t_list **list, t_list **list2);
void	ft_rrb(t_list **list1, t_list **list2);
void	ft_rrr(t_list **list1, t_list **list2);
int		ft_more_than_one_elem(t_list **list);
#endif
