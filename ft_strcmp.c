/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:16:45 by rkhelif           #+#    #+#             */
/*   Updated: 2021/08/04 17:53:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (s1[a] == '+')
		a++;
	if (s2[b] == '+')
		b++;
	while (s1[a] != '\0' && s2[b] != '\0' && s1[a] == s2[b])
	{
		a++;
		b++;
	}
	if (s1[a] != s2[b])
		return (1);
	return (0);
}
