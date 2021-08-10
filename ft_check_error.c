/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:12:43 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/09 18:10:35 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_error(char **argv, int argc)
{
	if (ft_check_string(argv, argc) > 0)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (ft_check_int_max(argv, argc) > 0)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (ft_check_duplicata(argv, argc) > 0)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	return (0);
}
