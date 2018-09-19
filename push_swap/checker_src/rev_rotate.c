/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:00:17 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:00:23 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(int *a, int a_c, int i)
{
	int j;

	j = i - 1;
	if (j > 0)
	{
		while (j > a_c)
		{
			ft_swap(&a[j], &a[j - 1]);
			j--;
		}
	}
}

void	rrb(int *a, int a_c)
{
	int j;

	j = a_c - 1;
	while (j > 0)
	{
		ft_swap(&a[j], &a[j - 1]);
		j--;
	}
}

void	rrr(int *a, int a_c, int i)
{
	rra(a, a_c, i);
	rrb(a, a_c);
}
