/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicata_3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:11:30 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/11 16:19:01 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicata_3(char **argv, int argc, t_duplicata d, char *tab)
{
	while (d.i < argc)
	{
		while (argv[d.i][d.k] != '\0')
		{
			if (argv[d.i][d.k] == ' ')
				d.k++;
			d.size = ft_size_of_number(argv[d.i], d.k);
			if (ft_check_is_the_same(tab, d, argv) > 0)
			{
				free(tab);
				tab = NULL;
				return (1);
			}
			d.k += d.size;
		}
		d.i++;
		d.k = 0;
	}
	return (0);
}
