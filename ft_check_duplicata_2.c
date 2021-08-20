/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicata_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:39:36 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/11 16:22:49 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicata_2(char **argv, int argc, t_duplicata d)
{
	char	*tab;
	int		i;

	tab = NULL;
	i = -1;
	tab = (char *)malloc(sizeof(char) * (d.size + 1));
	if (tab == NULL)
		return (1);
	while (argv[d.i][d.k] != '\0' && argv[d.i][d.k] != ' ')
	{
		tab[++i] = argv[d.i][d.k];
		d.k++;
	}
	tab[++i] = '\0';
	if (ft_check_duplicata_3(argv, argc, d, tab) > 0)
		return (1);
	free(tab);
	tab = NULL;
	return (0);
}
