/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_is_the_same.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 22:12:17 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/11 12:39:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_is_the_same(char *tab, t_duplicata d, char **argv)
{
	int	i;

	i = 0;
	if (tab[i] == '+')
		i++;
	if (argv[d.i][d.k] == '+')
		d.k++;
	if (tab[i] == '-' && tab[i + 1] == '0')
		i++;
	if (argv[d.i][d.k] == '-' && argv[d.i][d.k + 1] == '0')
		d.k++;
	while (tab[i] != '\0' && tab[i] == argv[d.i][d.k])
	{
		i++;
		d.k++;
	}
	if (tab[i] == '\0' && (argv[d.i][d.k] == ' ' || argv[d.i][d.k] == '\0'))
		return (1);
	return (0);
}
