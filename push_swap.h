/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:32:54 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/21 23:39:45 by rkhelif          ###   ########.fr       */
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
	int				nbr;
	long			index;
}				t_list;

typedef struct	s_duplicata
{
	int		size;
	int		i;
	int		k;
}				t_duplicata;

typedef	struct	s_value_for_action
{
	int	i;
	int	size;
	int	size2;
	int	middle;
	int	chunk;
	int	step;
	int	ra;
	int	ra_next;
	int	v1;
	int	v2;
	int	v3;
	int	v4;
	int	level;
	int	m;
}				t_value_for_action;

typedef	struct	s_count
{
	int	count1;
	int	count2;
	int	count3;
	int	count4;
}				t_count;




# define SA 0
# define SB 1
# define SS 2
# define PA 3
# define PB 4
# define RA 5
# define RB 6
# define RR 7
# define RRA 8
# define RRB 9
# define RRR 10


void	ft_put_str(char *str);
long	ft_atol(char *str, int i);

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int		ft_check_error(char **argv, int argc);

int		ft_check_string(char **argv, int argc);
int		ft_check_int_max(char **argv, int argc);
int		ft_check_int_max2(char *str, int k, int check_0);
int		ft_check_duplicata(char **argv, int argc);
int		ft_check_duplicata_2(char **argv, int argc, t_duplicata d);
int		ft_check_duplicata_3(char **argv, int argc, t_duplicata d, char *tab);
int		ft_check_is_the_same(char *tab, t_duplicata d, char **argv);

int		ft_size_of_number(char *str, int i);

t_list	*ft_init_the_list(char **argv, int argc);
int		ft_list_add_all_elem(t_list **list, char *str, int i);
void	ft_list_add_all_elem_2(t_list **list, t_list *n);
t_list	*ft_create_new_elem(int nbr);


void	ft_init_ptr(void (**ptr)(t_list **list1, t_list **list2));

void	ft_free_all_list(t_list **list);
void	ft_sa(t_list **list1, t_list **list2);
void	ft_sb(t_list **list1, t_list **list2);
void	ft_ss(t_list **list1, t_list **list2);
void	ft_pb(t_list **list1, t_list **list2);
void	ft_pb2(t_list **list1, t_list **list2);
void	ft_pa(t_list **list1, t_list **list2);
void	ft_ra(t_list **list1, t_list **list2);
void	ft_rb(t_list **list1, t_list **list2);
void	ft_rr(t_list **list1, t_list **list2);
void	ft_rra(t_list **list1, t_list **list2);
void	ft_rrb(t_list **list1, t_list **list2);
void	ft_rrr(t_list **list1, t_list **list2);
int		ft_more_than_one_elem(t_list **list);

void	ft_display(int index);

int		ft_find_number_elem(t_list **list);

void	ft_asign_index_list(t_list **list);

void    ft_sort_list(t_list **list1, t_list **list2,
		void (**ptr)(t_list **list1, t_list **list2),
		t_value_for_action action);


t_list	*ft_find_last_elem_list(t_list **list1);
t_list	*ft_find_min_elem_list(t_list **list1);
t_list	*ft_find_max_elem_list(t_list **list1);

int		ft_check_list_is_ordered(t_list **list);
int		ft_check_list_is_ordered2(t_list **list);
int		ft_find_middle_elem(t_list **list, int nbr, long index, int size);

t_value_for_action	ft_init_action(t_list **list1, t_list **list2);
int	ft_checklist_is_ordered_and_list_b_empty(t_list **list1, t_list **list2);
void	ft_sort_list_under_26(t_list **list1, t_list **list2,
		t_value_for_action a, void (**ptr)(t_list **list1, t_list **list2));
void	ft_best_solution_for_three(t_list **list1, t_list **list2,
		void (**ptr)(t_list **list1, t_list **list2));
void	ft_action(t_list **list1, t_list **list2,
		void (**ptr)(t_list **list1, t_list **list2), int action);
void	ft_find_min_elem_to_put_in_b(t_list **list1, t_list **list2,
		void (**ptr)(t_list **list1, t_list **list2));
void	ft_sort_list_under_101(t_list **list1, t_list **list2,
		t_value_for_action a, void (**ptr)(t_list **list1, t_list **list2));

t_value_for_action	ft_action_during_first_step(t_list **list1, t_list **list2,
					t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2));

t_value_for_action 	ft_check_action_to_do_first(t_list **list1, t_list **list2,
					t_value_for_action a);

int		ft_check_if_there_value_less(t_list **list1, t_value_for_action a);

t_value_for_action	ft_action_during_second_step(t_list **list1,
					t_list **list2, t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2));

t_value_for_action ft_check_action_to_do_second(t_list **list2,
					t_value_for_action a);

t_value_for_action	ft_direction_to_the_next_elem(t_list **list2, t_list *max,
					t_list *min, t_value_for_action a);

int					ft_find_the_less_count_and_return_action(t_count c);

t_value_for_action	ft_return_good_values_for_action(t_value_for_action a,
					int ra, int ra_next, int i);

t_value_for_action	ft_action_during_third_step(t_list **list1, t_list **list2,
					t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2));

t_value_for_action 	ft_check_action_to_do_third(t_list **list1, t_list **list2,
					t_value_for_action a);

int	ft_check_if_there_value_more(t_list **list1, t_value_for_action a);

t_value_for_action  ft_action_during_fouth_step(t_list **list1, t_list **list2,
					t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2));
t_value_for_action  ft_check_action_to_do_fouth(t_list **list2,
					t_value_for_action a);
int 				ft_find_trois_quart_elem(t_list **list, int nbr,long index,
					int size);

int					ft_check_list_1(int a, int b, t_list **list2);

int ft_find_the_elem_value_need(t_list **list, int nbr, long index, int elem);

void				ft_sort_list_above_100(t_list **list1, t_list **list2,
					t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2));

void				ft_sort_chunk_first_part1(t_list **list1, t_list **list2,
					t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2));

t_value_for_action	ft_action_to_do_part1(t_list **list1, t_list **list2,
					t_value_for_action a);

int					ft_check_if_there_value_enter(t_list **list1,
					t_value_for_action a);

void				ft_sort_chunk_last_part(t_list **list1, t_list **list2,
					t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2));

void				ft_check_the_list_before_push(t_list **list1, t_list **list2,
					t_value_for_action a,
					void (**ptr)(t_list **list1, t_list **list2));

#endif
