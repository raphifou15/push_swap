/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:19:55 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/08 19:43:31 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_string(char **argv, int argc)
{
	int	i;
	int	k;

	i = 0;
	k = -1;
	while (++i < argc)
	{
		while (argv[i][++k] != '\0')
		{
			if (argv[i][k] == ' ')
				;
			else if (argv[i][k] == '+' || argv[i][k] == '-')
			{
				if (argv[i][k + 1] < 48 || argv[i][k + 1] > 57)
					return (1);
			}
			else if (argv[i][k] < 48 || argv[i][k] > 57)
					return (1);
		}
		k = -1;
	}
	return (0);
}
