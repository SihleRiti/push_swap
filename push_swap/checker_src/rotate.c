/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:00:35 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:00:40 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rb(int *a, int a_c)
{
	int j;

	j = 0;
	if (a_c > 1)
	{
		while (j < a_c - 1)
		{
			ft_swap(&a[j], &a[j + 1]);
			j++;
		}
	}
}

void	ra(int *a, int a_c, int i)
{
	int j;

	j = a_c;
	if (!(a_c >= i))
	{
		while (j < i - 1)
		{
			ft_swap(&a[j], &a[j + 1]);
			j++;
		}
	}
}

void	rr(int *a, int a_c, int i)
{
	ra(a, a_c, i);
	rb(a, a_c);
}
