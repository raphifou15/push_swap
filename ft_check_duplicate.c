/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:51:47 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/04 17:53:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicate(char **argv, int argc)
{
	int	i;
	int	y;

	y = 0;
	i = 1;
	while (++y < argc - 1)
	{
		while (++i < argc)
		{
			if (ft_strcmp(argv[y], argv[i]) == 0)
				return (1);
		}
		i = y + 1;
	}
	return (0);
}
