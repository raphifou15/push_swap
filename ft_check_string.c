/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:17:42 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/05 11:10:42 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_string(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' || str == NULL)
		return (1);
	if (str[i] == '+' || str[i] == '-')
	{
		i = 0;
		if (str[i + 1] == '\0')
			return (1);
	}
	else
		i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (1);
	}
	return (0);
}
