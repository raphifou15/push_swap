/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicata_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:39:36 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/10 23:15:54 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicata_2(char **argv, int argc, t_duplicata d)
{
	char	tab[d.size + 1];
	int		i;

	i = -1;
	while (argv[d.i][d.k] != '\0' && argv[d.i][d.k] != ' ')
	{
		tab[++i] = argv[d.i][d.k];
		d.k++;
	}
	tab[++i] = '\0';
	while (d.i < argc)
	{
		while (argv[d.i][d.k] != '\0')
		{
			if (argv[d.i][d.k] == ' ')
				d.k++;
			d.size = ft_size_of_number(argv[d.i], d.k);
			if (ft_check_is_the_same(tab, d, argv) > 0)
				return (1);
			d.k += d.size;
		}
		d.i++;
		d.k = 0;
	}
	return (0);
}
