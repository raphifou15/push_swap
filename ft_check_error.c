/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:21:46 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/04 17:53:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_error(char **argv, int argc)
{
	int	i;

	(void) argc;
	i = 0;
	while (argv[++i] != '\0')
	{
		if (ft_check_string(argv[i]) > 0 || ft_check_int_max(argv[i]) > 0)
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	if (ft_check_duplicate(argv, argc) > 0)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
