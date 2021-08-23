# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 23:24:15 by rkhelif           #+#    #+#              #
#    Updated: 2021/08/23 23:36:51 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS = push_swap.c \
		ft_action.c \
		ft_action_during_first_step.c \
		ft_action_during_fouth_step.c \
		ft_action_during_second_step.c \
		ft_action_during_third_step.c \
		ft_action_to_do_part1_2.c \
		ft_action_to_do_part1.c \
		ft_action_to_do_second_chunk3.c \
		ft_asign_index_list.c \
		ft_atol.c \
		ft_best_solution_for_three.c \
		ft_check_action_to_do_first.c \
		ft_check_action_to_do_first_next.c \
		ft_check_action_to_do_fouth.c \
		ft_check_action_to_do_second_chunk2.c \
		ft_check_action_to_do_second_chunk.c \
		ft_check_action_to_do_third.c \
		ft_check_duplicata_2.c \
		ft_check_duplicata_3.c \
		ft_check_duplicata.c \
		ft_check_error.c \
		ft_check_if_there_value_enter.c \
		ft_check_if_there_value_less.c \
		ft_check_if_there_value_more.c \
		ft_check_int_max2.c \
		ft_check_int_max.c \
		ft_check_is_the_same.c \
		ft_check_list_1.c \
		ft_check_list_is_ordered2.c \
		ft_checklist_is_ordered_and_list_b_empty.c \
		ft_check_list_is_ordered.c \
		ft_check_string.c \
		ft_check_the_list_before_push.c \
		ft_create_new_elem.c \
		ft_direction_to_the_next_elem.c \
		ft_display.c \
		ft_find_last_elem_list.c \
		ft_find_max_elem_list.c \
		ft_find_middle_elem.c \
		ft_find_min_elem_list.c \
		ft_find_min_elem_to_put_in_b.c \
		ft_find_number_elem.c \
		ft_find_second_min_elem.c \
		ft_find_the_elem_value_need.c \
		ft_find_the_less_count_and_return_action.c \
		ft_free_all_list.c \
		ft_init_action.c \
		ft_init_count.c \
		ft_init_ptr.c \
		ft_init_the_list.c \
		ft_list_add_all_elem_2.c \
		ft_list_add_all_elem.c \
		ft_more_than_one_elem.c \
		ft_pa.c \
		ft_pb2.c \
		ft_pb.c \
		ft_put_str.c \
		ft_ra.c \
		ft_rb.c \
		ft_return_action_after_push.c \
		ft_return_action_if_max.c \
		ft_return_action_if_min.c \
		ft_return_good_values_for_action.c \
		ft_rra.c \
		ft_rrb.c \
		ft_rr.c \
		ft_rrr.c \
		ft_sa.c \
		ft_sb.c \
		ft_size_of_number.c \
		ft_sort_chunk_first_part1.c \
		ft_sort_chunk_last_part.c \
		ft_sort_list_above_100.c \
		ft_sort_list.c \
		ft_sort_list_under_101.c \
		ft_sort_list_under_26.c \
		ft_ss.c \
		ft_strcmp.c \
		ft_strlen.c

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all
