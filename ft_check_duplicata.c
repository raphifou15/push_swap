/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicata.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:56:38 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/10 23:01:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicata(char **argv, int argc)
{
	t_duplicata		d;

	d.i = 0;
	while (++d.i < argc)
	{
		d.k = -1;
		if (argv[d.i][0] == ' ')
			return (1);
		while (argv[d.i][++d.k] != ('\0'))
		{
			if (d.k != 0 && argv[d.i][d.k - 1] == ' ' &&
			(argv[d.i][d.k] == ' ' || argv[d.i][d.k] == '\0'))
				return (1);
			d.size = ft_size_of_number(argv[d.i], d.k);
			if (ft_check_duplicata_2(argv, argc, d) > 0)
				return (1);
			d.k += (d.size);
			if (argv[d.i][d.k] == ' ' && argv[d.i][d.k + 1] == '\0')
				return (1);
			if (argv[d.i][d.k] == '\0')
				--d.k;
		}
	}
	return (0);
}
